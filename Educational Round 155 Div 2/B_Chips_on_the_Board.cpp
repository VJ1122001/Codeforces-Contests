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

    vector<long long> a(n);
    vector<long long> b(n);
    
    for(int i=0;i<n;i++) cin>> a[i];
    for(int i=0; i<n; i++) cin>> b[i];
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());


    long long sumA=0;
    long long sumB=0;
    for(auto x: a) sumA+= x;
    for(auto x: b) sumB+= x;

    long long result= min(sumA+ n* b[0], sumB+ n* a[0]);

    cout<<result<<endl;

    
    
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