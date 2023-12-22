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
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);

    for(int i=0; i<n; i++)
    cin>> a[i];

    for(int i=0; i<n; i++)
    cin>> b[i];

    int sum=0;
    int exp=0;
    int mx = -1;
    for(int i=0; i<n; i++)
    {
        sum+= a[i];
        // mx= max(a[i], mx);
        mx= max(b[i], mx);

        if(i+1 < k+1)
        exp = max(exp, sum+  (mx * (k- (i+1))));
    }

    cout<<exp<<endl;
    
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