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
    int n;
    cin>> n;

    vector<int> p(n,0);
    for(int i=1; i<n; i++)
    {
        cin>> p[i];
        p[i]--;
    }

    vector<vector<int>> graph(n);
    for(int i=1; i<n; i++)
    {
        graph[p[i]].push_back(i);
    }
    vector<int> cnt(n);
    function<void(int)> cntNodes= [&](int src)
    {
        cnt[src]++;
        for(auto v: graph[src])
        {
            cntNodes(v);
            cnt[src]+= cnt[v];
        }
    };

    cntNodes(0);

    long long ans=0;
    function<void(int,int)> dfs= [&](int src, int x)
    {
        ans+= (x >0);
        if( x> 0) x--;

        int totalNodes= 0;
        for(auto v: graph[src])
        {
            totalNodes+= cnt[v];
        }
        
        for(auto v: graph[src])
        {
            dfs(v, totalNodes+x - cnt[v]);
        }
    };

    dfs(0, 0);
    
    cout<<ans/2<<endl;

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