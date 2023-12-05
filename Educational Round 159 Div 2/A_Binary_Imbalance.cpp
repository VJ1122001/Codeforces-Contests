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
    cin >> n;
    string s;
    cin>> s;

    int cnt0=0, cnt1=0;
    for(int i=0; i<n; i++)
    if(s[i]=='0') cnt0++;
    else cnt1++;

    if(cnt0 > cnt1)
    {
        cout<<"YES"<<endl;
        return;
    }
    else
    {
        if(s.find("00")== string::npos && s.find("10")== string::npos && s.find("01")== string::npos)
        {
            cout<<"NO"<<endl;
        }
        else
        cout<<"YES"<<endl;
    }
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