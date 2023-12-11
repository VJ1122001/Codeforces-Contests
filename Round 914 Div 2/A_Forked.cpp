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
    long long a,b;
    cin>> a>> b;

    long long kx, ky;
    cin>> kx >> ky;

    long long qx, qy;
    cin>> qx >> qy;

    set<pair<long long,long long>> s1;
    set<pair<long long,long long>> s2;

    s1.insert({kx+ a, ky+ b});
    s1.insert({kx+ a, ky- b});
    s1.insert({kx- a, ky+ b});
    s1.insert({kx- a, ky- b});
    s1.insert({kx+ b, ky+ a});
    s1.insert({kx+ b, ky- a});
    s1.insert({kx- b, ky+ a});
    s1.insert({kx- b, ky- a});

    s2= s1;
    s1.clear();
    kx= qx; ky= qy;
    s1.insert({kx+ a, ky+ b});
    s1.insert({kx+ a, ky- b});
    s1.insert({kx- a, ky+ b});
    s1.insert({kx- a, ky- b});
    s1.insert({kx+ b, ky+ a});
    s1.insert({kx+ b, ky- a});
    s1.insert({kx- b, ky+ a});
    s1.insert({kx- b, ky- a});

    int ans=0;
    set<pair<long long,long long>> visited;

    for(auto x: s1)
    {
        if(!visited.count(x) && s2.count(x))
        {
            visited.insert(x);
            ans++;
        }
    }

    for(auto x: s2)
    {
        if(!visited.count(x) && s1.count(x))
        {
            visited.insert(x);
            ans++;
        }
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