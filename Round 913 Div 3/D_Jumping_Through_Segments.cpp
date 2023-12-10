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

bool isValid(long long mid, vector<long long>& l, vector<long long>& r)
{
    long long curX=0, curY=0;

    for(int i=0; i< l.size(); i++)
    {
       curX= max(curX- mid, l[i]);
       curY= min(curY+ mid, r[i]);

       if(curX > curY)
       return false;
    }

    return true;
}
void solve()
{
    int n;
    cin>> n;
    vector<long long> l(n);
    vector<long long> r(n);
    for(int i=0; i<n; i++)
    cin>> l[i] >> r[i];
    
    long long lo= 0;
    long long hi= 1e9;
    long long ans= INT_MAX;

    while(lo <= hi)
    {
        long long mid= lo+ (hi-lo)/2;

        if(isValid(mid, l, r))
        {
            ans= min(ans,mid);
            hi= mid-1;
        }
        else
        {
            lo= mid+1;
        }
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