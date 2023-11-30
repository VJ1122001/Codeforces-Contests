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

int ans=INT_MAX;
void dfs(vector<vector<int>>& graph, int src, vector<int>& visited, int cnt, string& s)
{
    visited[src]= 1;
    // cout<<src<< " " <<graph[src].size()<<endl;
    int cntChild= 0;
    for(int i=0; i<graph[src].size(); i++)
    {
        int x= graph[src][i];
        if(x > 0)
        cntChild ++;

        if(!visited[x])
        {
            if(s[src]=='U')
                dfs(graph, x, visited, cnt+1, s);
            else
            {
                if(i==0 && s[src]=='L')
                    dfs(graph, x, visited, cnt, s);
                else if (i==1 && s[src]=='R')
                    dfs(graph, x, visited, cnt, s);
                else
                    dfs(graph, x, visited, cnt+1, s);
            }
                
        }
    }
    
    // cout<<cnt<<" "<<src<<endl;
    if(cntChild == 0)
        ans= min(ans, cnt);
}

void solve()
{
    int n;
    cin>> n;
    string s;
    cin>> s;

    vector<vector<int>> graph(n);
    for(int i=0; i<n; i++)
    {
        int x,y;
        cin>> x>> y;
        if(x> 0)
            graph[i].push_back(x-1);
        else
            graph[i].push_back(0);

        if(y> 0)
            graph[i].push_back(y-1);
        else
            graph[i].push_back(0);
    }
    ans=INT_MAX;
    vector<int> visited(n,0);
    dfs(graph, 0,visited,0, s);

    cout<<ans<<endl;
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