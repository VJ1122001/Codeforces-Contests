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
    vector<int> s(n);
    vector<int> e(n);

    for(int i=0;i<n;i++) 
    {
        cin>> s[i];
        cin>> e[i];
    }

    int b= s[0]-1;
    for(int i=1; i<n; i++)
    {
        if(s[i]>b && e[i]>=e[0])
        {
            cout<<"-1"<<endl;
            return;
        }
    }

    cout<<b<<endl;
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