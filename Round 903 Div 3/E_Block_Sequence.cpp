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

int dp[200001];
int recur(vector<int>& nums, int i)
{
    int n= nums.size();

    if(i==n)
        return 0;

    if(dp[i]!=-1) return dp[i];

    int ans= 1e9;

    if( n-i-1 >= nums[i])
    {
        ans= min(ans, recur(nums, i+ nums[i]+1));
    }

    ans= min(ans, 1+ recur(nums, i+1));

    return dp[i]= ans;

}

void solve()
{
    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i=0; i<n; i++)
    cin>> nums[i];

    for(int i=0; i<200001; i++)
    dp[i]=-1;
    
    cout<<recur(nums, 0)<<endl;
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