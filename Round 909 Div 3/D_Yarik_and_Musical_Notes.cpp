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
    vector<long double> a(n);

    for(int i=0; i<n; i++)
    cin>> a[i];

    vector<long double> l(n);
    long long ans=0 ;

    unordered_map<long double, int> freq;
    for(int i=0; i<n; i++)
    {
        l[i]= log2(a[i]);
        a[i]-= l[i];

        ans+= freq[a[i]];
        freq[a[i]]++;
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