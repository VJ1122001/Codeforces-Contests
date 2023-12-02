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
    vector<int> A(n);
    for(int i=0; i<n; i++)
    cin>> A[i];

    long long sum=0;

    vector<long long> suffix(n);
    for(int i=n-1; i>=0; i--)
    {
        sum+= A[i];
        suffix[i]= sum;
    }

    long long ans= suffix[0];
    for(int i=1; i<n; i++)
    {
        if(suffix[i] > 0)
            ans+= suffix[i];
    }

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