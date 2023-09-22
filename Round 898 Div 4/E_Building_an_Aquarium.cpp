#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define int long long
#define mod 998244353
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define INF (1LL << 60)
#define NINF -INF
#define endl "\n"

bool isValid(int mid, vector<int>& a, int& x)
{
    int water=0;
    int n= a.size();

    for(int i=0;i<n;i++)
        water+= max(mid-a[i],(long long)0);
    
    // if(mid==3) cout<<water<<endl;
    if(water<= x)
    return true;
    else
    return false;
}
void solve()
{
    int n, x;
    cin>> n>> x;

    vector<int> a(n);
    for(int i=0;i<n;i++)
    cin>> a[i];

    int l=1;
    int h= 1e10;
    int ans= 1;
    while(l<=h)
    {
        int mid= (l+h)/2;
        // cout<<mid<<endl;

        if(isValid(mid,a,x))
        {
            ans= max(ans,mid);
            l= mid+1;
        }
        else
        {
            h= mid-1;
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