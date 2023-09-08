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

    vector<pair<int,int>> traps(n);

    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>> x>>y;
        traps[i].first= x;
        traps[i].second= y;
    }

    sort(traps.begin(), traps.end());

    int ans= INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(traps[i].second%2)
        ans= min(ans, traps[i].first-1+ (traps[i].second/2)+1);
        else
        ans= min(ans, traps[i].first-1+ (traps[i].second/2));
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