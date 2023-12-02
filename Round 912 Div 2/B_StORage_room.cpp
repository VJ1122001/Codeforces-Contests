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

    vector<int> A(n, (1<<30)-1);
    vector<vector<int>> M(n, vector<int>(n));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>> M[i][j];
            if(i!=j)
            {
                A[i] &= M[i][j];
                A[j] &= M[i][j];
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i!=j)
            {
                if((A[i] | A[j]) != M[i][j])
                {
                    cout<<"NO"<<endl;
                    return;
                }
            }

        }
    }
    cout<<"YES"<<endl;
    for(int i=0; i<n; i++)
    cout<<A[i]<<" ";
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