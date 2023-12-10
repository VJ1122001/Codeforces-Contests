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
        freq[c-'a']++;

    int mxFreq= *max_element(freq.begin(), freq.end());
    cout<< max(n%2, 2*mxFreq- n)<<endl;
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