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

    for(int i=0;i<n;i++)
    cin>> nums[i];

    int t=0;
    for(auto x: nums)
    t^= x;
    cout<<t<<endl;

    // vector<long long> prefixXor(n);

    // int sum=0;
    // for(int i=0;i<n;i++)
    // {
    //     sum^= nums[i];
    //     prefixXor[i]= sum;
    // }

    // long long ans=0;
    // for(int i=0;i<n;i++)
    // {
    //     ans+=
    // }
}

int main()
{
    fast_io;
    int t;
    t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}