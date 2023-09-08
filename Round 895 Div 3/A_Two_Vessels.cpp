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
    int a,b,c;
    cin>>a >>b>>c;

    int moves=0;
    if(a<b)
    swap(a,b);

    while(a-c>b)
    {
        a-=c;
        b+=c;
        moves++;
    }

    if(a>b)
    moves++;

    cout<<moves<<endl;
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