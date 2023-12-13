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
    int n, x;
    cin>> n>> x;
    vector<int> stations(n);
    for(int i=0 ; i<n; i++)
    cin>> stations[i];

    sort(stations.begin(), stations.end());

    int curPos=0;
    int ans= 0;

    for(int i=0; i<n; i++)
    {
        if(stations[i] > x)
        {
            ans= max(ans, 2*(x- curPos));
            cout<<ans<<endl;
            return;
        }
        else if(stations[i]==x)
        {
            ans= max(ans, x- curPos);
            cout<<ans<<endl;
            return;
        }

        ans= max(ans, stations[i]- curPos);
        curPos= stations[i];
    }

    ans= max(ans, 2*(x-curPos));
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