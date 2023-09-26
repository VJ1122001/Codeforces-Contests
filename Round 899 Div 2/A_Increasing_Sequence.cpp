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

    vector<long long> b(n);
    
    int i=1;
    int j=0;
    while(j<n)
    {
        if(nums[j]== i)
            i++;
        
        b[j]=i;
        
        j++;
        i++;
    }

    cout<<b[n-1]<<endl;
    
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