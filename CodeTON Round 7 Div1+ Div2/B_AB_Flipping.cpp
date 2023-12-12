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
    string s;
    cin>> s;

    int fa=-1;
    int lb= -1;

    for(int i=0; i<n; i++)
    {
        if(fa==-1 && s[i]=='A') fa=i;

        if(s[i]=='B') lb= i;
    }

    if(fa ==-1 || lb== -1 || lb < fa)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<lb-fa<<endl;
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