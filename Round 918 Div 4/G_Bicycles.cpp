#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// struct custom_hash {
//     static uint64_t splitmix64(uint64_t x) {
//         // http://xorshift.di.unimi.it/splitmix64.c
//         x += 0x9e3779b97f4a7c15;
//         x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
//         x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
//         return x ^ (x >> 31);
//     }

//     size_t operator()(uint64_t x) const {
//         static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
//         return splitmix64(x + FIXED_RANDOM);
//     }
// };

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> edges(m, vector<int>(3));

    for(int i=0; i<m; i++)
    cin>> edges[i][0] >> edges[i][1] >> edges[i][2];

    vector<long long> s(n);
    for(int i=0; i<n; i++)
    cin>> s[i];


    vector<vector<pair<int,int>>> graph(n);
    for(auto edge: edges)
    {
        int u= edge[0]-1, v= edge[1]-1, cost= edge[2];
        graph[u].push_back({cost,v});
        graph[v].push_back({cost,u});
        
    }

    vector<vector<long long>> timeTo(n+1, vector<long long>(1001,LONG_LONG_MAX));
    vector<vector<bool>> visited(n+1, vector<bool>(1001,false));

    priority_queue<vector<long long>, vector<vector<long long>>, greater<vector<long long>>> pq;
    
    timeTo[0][s[0]]= 0;
    pq.push({0,0, s[0]});

    while(!pq.empty())
    {
        auto cur= pq.top();
        pq.pop();

        long long curBike= cur[2];
        long long curCity= cur[1];
        long long curCost= cur[0];

        if(visited[curCity][curBike] || timeTo[curCity][curBike]== LONG_LONG_MAX)
        continue;

        visited[curCity][curBike]= true;

        for(auto nbr: graph[curCity])
        {
            long long nbrCity= nbr.second;
            long long newCost= nbr.first;

            long long newBike= min(curBike, s[nbrCity]);

            if(timeTo[nbrCity][newBike] > timeTo[curCity][curBike]+ newCost* curBike)
            {
                timeTo[nbrCity][newBike] = timeTo[curCity][curBike]+ newCost* curBike;
                pq.push({timeTo[nbrCity][newBike], nbrCity, newBike});
            }
        }

    }

    cout<< *min_element(timeTo[n-1].begin(), timeTo[n-1].end())<<endl;
    
}

int main()
{
    int t=1;
    cin>> t;
    while(t--)
    {
        solve();
    }
}