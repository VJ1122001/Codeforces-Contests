#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define mod 998244353
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define INF (1LL << 60)
#define NINF -INF
#define endl "\n"


void solve()
{
    long long n;
    cin>> n;
    vector<long long> nums(n);

    for(int i=0; i<n;i++) cin>> nums[i];
    vector<pair<long long, long long>> v;

    priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> pq;
    for(int i=0; i<n; i++)
    {
        pq.push({nums[i], i});
        v.push_back({nums[i], i});
    }

    sort(v.begin(), v.end());
    // for(int i=0; i<n; i++)
    // cout<<v[i].first<<" ";
    // cout<<endl;
    
    vector<long long> ans(n);
    long long curScore= 0;
    set<pair<int,int>> visited;
    for(int i=0; i<n;i++)
    {
        if(!visited.count(v[i]))
        {
            visited.insert(v[i]);
            curScore+= v[i].first;
        }

        while(!pq.empty() && pq.top().first <=  curScore)
        {
            if(!visited.count(pq.top()))
            {
                curScore+= pq.top().first;
                visited.insert(pq.top());
            }
            pq.pop();
        }

        // cout<<pq.size()<<endl;
        ans[v[i].second]= n- pq.size()-1;
        // cout<< ans[v[i].second]<< " ";
    }

    for(int i=0; i<n; i++)
        cout<<ans[i]<<" ";
    cout<<endl;
}

int main()
{
    fast_io;
    int t;
    t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}