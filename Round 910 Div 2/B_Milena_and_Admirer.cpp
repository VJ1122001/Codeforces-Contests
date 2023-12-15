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
    vector<long long> nums(n);
    for(int i=0; i<n; i++)
    cin>> nums[i];

    long long next= INT_MAX;
    long long ans=0;
    for(int i= n-1; i>=0; i--)
    {
        if(next >= nums[i])
        {
            next= nums[i];
            continue;
        }
        else
        {
            long long x= ceil((double)nums[i]/ next);
            ans+= (x-1);
            next= nums[i]/ x;
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