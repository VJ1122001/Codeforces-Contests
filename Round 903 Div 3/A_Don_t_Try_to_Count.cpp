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
    int n,m;
    cin>> n >> m;
    string x,s;
    cin>> x>> s;

    int ops=0;

    while(true)
    {
        if(x.size() > 50 ) break;

        if(x.find(s)!= string::npos)
        {
            cout<<ops<<endl;
            return;
        }
        x+=x;
        ops++;
    }

    cout<<"-1"<<endl;
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