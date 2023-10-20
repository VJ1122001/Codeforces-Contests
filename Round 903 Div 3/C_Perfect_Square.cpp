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

    vector<vector<char>> mat(n, vector<char>(n));

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n;j++)
        cin>> mat[i][j];
    }

    // set<pair<int,int>> vis;

    int ops=0;
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<n;j++)
        {
            // if(vis.count({i,j})) continue;

            // n-1-j, i to i,j
            // i, j to j, n-1-i
            // n-1-i, n-1-j to n-1-j, i

            char mxChar= max({mat[i][j], mat[j][n-1-i], mat[n-1-i][n-1-j], mat[n-1-j][i]});
            ops+= mxChar- mat[i][j];
            ops+= mxChar- mat[j][n-1-i];
            ops+= mxChar- mat[n-1-i][n-1-j];
            ops+= mxChar- mat[n-1-j][i];
        }
    }

    // for(int i=0; i<n;i++)
    // {
    //     for(int j=0; j<n;j++)
    //     {
    //         cout<<mat[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    

    cout<<ops/4<<endl;
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