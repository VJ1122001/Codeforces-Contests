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

ll sumf(ll n)
{
    return n* (n+1)/2;
}

void solve()
{
    ll n,x,y;
    cin>> n >> x>> y;

    if(x==y)
    {
        cout<<0<<endl;
        return;
    }

    ll sum=0;

    ll cm= n/((x*y)/ __gcd(x,y));

    sum+= sumf(n)- sumf(n-n/x+cm);
    // cout<<sumf(n)<<" "<<sumf(n- n/x)<<endl;
    sum-= sumf(n/y-cm); 

    cout<<sum<<endl;


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