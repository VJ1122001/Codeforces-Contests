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
    string s;
    cin>> s;
    vector<int> freq(26);

    for(auto c: s)
        freq[c-'A']++;

    int ans=0;
    for(auto c= 'A'; c<='Z'; c++)
    {
        if(freq[c-'A'] >= (c-'A'+1))
        ans++;
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