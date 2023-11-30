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
    int a, b, c;
    cin>> a >> b >> c;

    a%=2;
    b%=2;
    c%=2;

    if((b==1 && c==0) || (c==1 && b==0))
    cout<<0<<" ";
    else
    cout<<1<<" ";

    if((a==1 && c==0) || (c==1 && a==0))
    cout<<0<<" ";
    else
    cout<<1<<" ";

    if((b==1 && a==0) || (a==1 && b==0))
    cout<<0<<" ";
    else
    cout<<1<<" ";
    
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