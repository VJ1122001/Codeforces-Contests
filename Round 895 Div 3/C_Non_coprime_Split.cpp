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
    int l,r;
    cin>> l>> r;


    // if(l==r)
    // {
    //     for(int i=2;i<1e5;i++)
    //     {
    //         if(l%i==0)
    //         {
    //             cout<<i<<" "<<l-i<<endl;
    //             return;
    //         }
    //     }

    //     cout<<"-1"<<endl;
    //     return;

    // }
    
    int a=0;
    if(r%2)
    {
        a=(r-1)/2;
    }
    else
    {
        a= r/2;
    }

    if(a==1)
        a++;

    if((2*a) > r || (2*a) < l)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<a<<" "<<a<<endl;
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