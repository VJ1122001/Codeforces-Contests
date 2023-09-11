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
    int n,m;
    cin>>n>>m;

    if(m==1)
    {
        cout<<0<<endl;
        for(int i=0;i<n;i++)
        cout<<0<<endl;
        return;
    }

    if(n==1)
    {
        cout<<2<<endl;
        for(int i=0;i<m;i++)
        cout<<i<<" ";
        cout<<endl;
        return;
    }

    vector<vector<int>> ans(min(n,m-1), vector<int>(m));
    // vector<vector<int>> result(n, vector<int>(m));

    int temp=0;
    for(int i=0;i<m;i++)
    {
        int j=0;
        for(;j<min(n,m-1);j++)
        {
            // cout<<j<<" "<<i<<endl;
            ans[j][i]= (temp% m);
            temp++;
        }

        while(j++<m-1)
        temp++;
    }

    if(n<m)
    {
        cout<<n+1<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                cout<<ans[i][j]<<" ";
            cout<<endl;
        }
    }
    else
    {
        cout<<m<<endl;
        for(int i=0;i<m-1;i++)
        {
            for(int j=0;j<m;j++)
                cout<<ans[i][j]<<" ";
            cout<<endl;
        }

        for(int i=m-1; i<n;i++)
        {
            for(int j=0;j<m;j++)
                cout<<ans[m-2][j]<<" ";
            cout<<endl;
        }
    }
}

int main()
{
    fast_io;
    int t;
    t = 1;
    cin >> t;
    vector<vector<int>> ans;

    while (t--)
    {
        solve();
    }
    return 0;
}