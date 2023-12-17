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

    long long curSum=0;
    long long curParity= -1;
    long long res= LONG_LONG_MIN;

    for(int i=0; i<n; i++)
    {
        if(curParity== abs(nums[i])% 2)
        {
            curSum=0;
            curParity=-1;
            i--;
            continue;
        }

        if(curSum < 0)
        {
            curSum=0;
            curParity=-1;
        }
        
        curSum+= nums[i];
        curParity= abs(nums[i]) % 2;
        res= max(res, curSum);
    }

    cout<<res<<endl;
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