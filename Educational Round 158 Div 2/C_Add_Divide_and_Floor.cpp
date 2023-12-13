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

    sort(nums.begin(), nums.end());

    long long mx= nums[n-1];
    long long mn= nums[0];
    vector<int> res;

    while(mn < mx)
    {
        res.push_back(mn % 2);
        mn= (mn +res.back())/2;
        mx= (mx+ res.back())/2;
    }

    cout<<res.size()<<endl;
    if(res.size() <= n)
    {
        for(int i=0; i<res.size(); i++)
        cout<<res[i]<<" ";
    }

    cout<<endl;
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