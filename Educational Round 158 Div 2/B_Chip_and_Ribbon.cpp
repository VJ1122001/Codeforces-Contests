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

    vector<long long> C(n);
    for(int i=0; i<n; i++)
    cin>> C[i];

    long long ans=0;
    
    for(int i=1; i<n; i++)
    {
        ans+= max(0LL, C[i]- C[i-1]);
    }

    C[0]--;
    ans+= C[0];
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