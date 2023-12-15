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
    int n,m,k;
    cin >> n >> m >> k;

    if(((n+m)% 2) != k%2 || k < (n+m-2))
    {
        cout<<"NO"<<endl;
        return;
    }

    vector<vector<char>> h(n, vector<char>(m-1, 'R')); 
    vector<vector<char>> v(n-1, vector<char>(m, 'B'));

    char prevColor= 'B';

    for(int i=1; i<n-1; i++)
    {
        if(prevColor=='R')
        {
            v[i][0]= 'B';
            prevColor= 'B';
        }
        else
        {
            v[i][0]= 'R';
            prevColor= 'R';
        }
    }
    
    for(int i=0; i<m-1; i++)
    {
        if(prevColor=='R')
        {
            h[n-1][i]= 'B';
            prevColor= 'B';
        }
        else
        {
            h[n-1][i]= 'R';
            prevColor= 'R';
        }
    }
    
    // cout<<h[n-1][m-3]<<endl;
    if(h[n-1][m-3]=='R')
    {
        v[n-2][m-2]='B';
        v[n-2][m-1]='B';
        h[n-2][m-2]='R';
    }
    else
    {
        v[n-2][m-2]='R';
        v[n-2][m-1]='R';
        h[n-2][m-2]='B';
    }

    cout<<"YES"<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m-1; j++)
        cout<<h[i][j]<<" ";
        cout<<endl;
    }

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<m; j++)
        cout<<v[i][j]<<" ";
        cout<<endl;
    }
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