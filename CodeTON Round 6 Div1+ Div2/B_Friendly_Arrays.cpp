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
    int n,m;
    cin>> n>> m;

    vector<long long> a(n);
    vector<long long> b(m);

    for(int i=0;i<n;i++)
    cin>> a[i];

    for(int i=0;i<m;i++)
    cin>> b[i];

    long long ans1= a[0];
    for(int i=1;i<n;i++)
    ans1^= a[i];

    long long orSum=0;
    for(auto num: b)
    orSum|= num;

    for(int i=0;i<n;i++)
    a[i]|= orSum;

    long long ans2= a[0];
    for(int i=1;i<n;i++)
    ans2^=a[i];

    if(ans1> ans2) swap(ans1,ans2);

    cout<<ans1<<" "<<ans2<<endl;

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