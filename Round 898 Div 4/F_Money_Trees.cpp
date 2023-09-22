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
    ll n,k;
    cin>> n >> k;
    vector<ll> a(n);
    vector<ll> h(n);

    for(ll i=0;i<n;i++)
    cin>> a[i];

    for(ll i=0;i<n;i++)
    cin>> h[i];

    bool flag= true;
    for(ll i=0;i<n;i++)
        if(a[i]<=k)
            flag= false;

    if(flag)
    {
        cout<<"0"<<endl;
        return;
    }

    ll i=0;
    ll j=1;
    ll ans=1;
    ll fruits= a[0];
    while(j<n)
    {
        while(j<n && ((h[j-1]% h[j])==0) && fruits<=k)
        {
            fruits+=a[j];
            j++;
        }
        
        if(fruits<=k)
        ans= max(ans,j-i);
        else
        ans= max(ans, j-i-1);

        if(j==n)
        break;

        if(j<n && (h[j-1]%h[j])==0)
        {
            while(i<j && fruits>k)
            {
                fruits-= a[i];
                i++;
            }
        }
        else
        {
            while(j<n && ((h[j-1]%h[j])!=0))
            {
                j++;
            }
            i=j-1;
            fruits= a[i];
        }
    }

    cout<<ans<<endl;

}

int32_t main()
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