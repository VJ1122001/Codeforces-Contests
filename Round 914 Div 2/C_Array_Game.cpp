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
    long long n, k;
    cin>> n >> k;
    vector<long long> A(n);

    for(int i=0; i<n; i++)
    cin>> A[i];

    if(k>=3)
    {
        cout<<0<<endl;
        return;
    }
    else
    {
        sort(A.begin(), A.end());
        long long ans= 1e18;
        for(int i=1; i<n; i++)
        ans= min(ans, A[i]- A[i-1]);
        ans= min(ans, A[0]);
        
        if(k==1)
        {
            cout<<ans<<endl;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<i; j++)
                {
                    long long diff= A[i]- A[j];
                    int idx= lower_bound(A.begin(), A.end(), diff)- A.begin();
                    int lidx= -1;

                    if(idx-1 >=0)
                        lidx= idx-1;

                    if(lidx >=0)
                    ans= min(ans, diff- A[lidx]);
                    if(idx < n)
                    ans= min(ans, A[idx]- diff);
                }
            }

            cout<<ans<<endl;
        }
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