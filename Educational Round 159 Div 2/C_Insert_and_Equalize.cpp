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

    long long g=0;
    if(n==1) g=1;
    else
    g = abs(nums[1] - nums[0]);

    for(int i=2; i<n; i++)
        g= __gcd(abs(nums[i]- nums[i-1]), g);
    
    // cout<< "g: " << g <<endl;

    
    // unordered_set<long long> present;
    // for(int i=0; i<n; i++)
    // present.insert(nums[i]);

    long long x= nums[n-1];
    for(int i=n-1; i >= 0 ;)
    {
        while(i>=0 && nums[i] > x)
        i--;

        if(nums[i]!=x)
            break;
        
        x-=g;
    }

    long long ops=0;
    for(int i=0; i<n; i++)
    ops+= abs((nums[n-1]- nums[i])/g);

    ops+= (nums[n-1]-x)/g;

    cout<<ops<<endl;
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