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

int entryPoint=-1;
bool dfs(vector<vector<int>>& graph, int src, int par, vector<bool>& visited)
{
    visited[src] = true;
    for(auto v : graph[src])
    {
        if(v != par && visited[v])
        {
            entryPoint = v;
            return true;
        }
        else if(v != par && !visited[v])
        {
            if(dfs(graph, v, src, visited))
            {
                return true;
            } 
        }
    }
    return false;
}

int calculateMinDist(int u, int v, vector<vector<int>>& graph)
{
    int n= graph.size();
    queue<int> q;
    int level=-1;
    vector<int> visited(n,false);
    q.push(u);
    visited[u]= true;

    while(!q.empty())
    {
        level++;
        int sz= q.size();
        for(int i=0;i<sz;i++)
        {
            int y= q.front();
            q.pop();
            
            for(auto x: graph[y])
            {
                if(x==v)
                return level+1;
                else if(!visited[x])
                {
                    q.push(x);
                    visited[x]= true;
                }
            }
        }
    }
    return -1;
}

void solve()
{
    int n, a, b;
    cin>> n>> a>> b;

    vector<vector<int>> graph(n);

    for(int i=0;i<n;i++)
    {
        int u,v;
        cin>> u>> v;
        graph[u-1].push_back(v-1);
        graph[v-1].push_back(u-1);
    }

    vector<bool> visited(n,false);
    dfs(graph, b-1,-1, visited);
    // entryPoint= 0;

    if(a==b)
    {
        cout<<"NO"<<endl;
        return;
    }

    int distMarcel=-1, distValerie=-1;
    if(entryPoint== a-1)
    distMarcel= 0;
    else
    {
        distMarcel= calculateMinDist(a-1,entryPoint, graph);
    }

    if(entryPoint==b-1)
    distValerie=0;
    else 
    {
        distValerie= calculateMinDist(b-1, entryPoint, graph);
    }

    // cout<<entryPoint<<endl;
    // cout<<distValerie<<" "<<distMarcel<<endl;
    if(distValerie< distMarcel)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

    entryPoint=-1;
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