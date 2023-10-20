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
    int n,k;
    cin>> n>> k;

    set<int> marked;
    vector<vector<int>> graph(n+1);

    for(int i=0; i<k;i++)
    {
        int x;
        cin>> x;
        marked.insert(x);
    }

    for(int i=0; i<n-1; i++)
    {
        int u;
        int v;

        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    if(marked.size()==1)
    {
        cout<<"0"<<endl;
        return;
    }

    vector<bool> visited(n+1, false);
    queue<int> q;

    q.push(*marked.begin());
    visited[*marked.begin()]= true;
    // cout<<*marked.begin()<<endl;

    int mxDv2=0;
    int nodeV2= -1;

    int level=0;
    while(!q.empty())
    {
        int sz= q.size();

        for(int i=0; i<sz; i++)
        {
            auto x= q.front();
            q.pop();

            for(auto nbr: graph[x])
            {
                if(!visited[nbr])
                {
                    if(marked.count(nbr))
                    {
                        if(mxDv2 < level+1)
                        {
                            mxDv2= level+1;
                            nodeV2= nbr;
                        }
                    }

                    q.push(nbr);
                    visited[nbr]= true;
                }
            }
        }
        level++;
    }

    // cout<<nodeV2<<endl;

    for(int i=0; i<n+1; i++)
        visited[i]= false;

    q.push(nodeV2);
    visited[nodeV2]= true;

    mxDv2= 0;
    nodeV2 =-1;
    level=0;

    while(!q.empty())
    {
        int sz= q.size();

        for(int i=0; i<sz; i++)
        {
            auto x= q.front();
            q.pop();

            for(auto nbr: graph[x])
            {
                if(!visited[nbr])
                {
                    if(marked.count(nbr))
                    {
                        if(mxDv2 < level+1)
                        {
                            mxDv2= level+1;
                            nodeV2= nbr;
                        }
                    }

                    q.push(nbr);
                    visited[nbr]= true;
                }
            }
        }
        level++;
    }

    // cout<<nodeV2<<endl;
    // cout <<mxDv2<< endl;

    cout<< ceil((double)mxDv2/2) <<endl;
    
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