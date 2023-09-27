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
    long long n,k,x;
    cin>> n>> k>> x;

    long long mn= k*(k+1)/2;
    long long mx= n*(n+1)/2 - (n-k)*(n-k+1)/2;

    if(x>= mn && x<=mx)
    cout<<"YES"<<endl;
    else 
    cout<<"NO"<<endl;
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