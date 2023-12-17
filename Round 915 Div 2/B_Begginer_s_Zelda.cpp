
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

    vector<int> indegree(n);
    // vector<int> outdegree(n);
    for(int i=0; i<n-1; i++)
    {
        int x; int y;
        cin>> x>>y;
        x--;
        y--;
        indegree[x]++;
        indegree[y]++;
    }

    int ans=0;
    for(int i=0; i<n; i++)
    {
        // cout<<indegree[i]<<" ";
        if(indegree[i]==1)
        ans++;
    }
    // cout<<endl;

    cout<<ceil((double)ans/2)<<endl;
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