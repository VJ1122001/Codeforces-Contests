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
    int n,k, a, b;
    cin>> n>> k>> a>>b;

    vector<pair<long long,long long>> cities(n);

    for(int i=0;i<n;i++)
    {
        cin>> cities[i].first>> cities[i].second;
    }

    long long result= abs(cities[a-1].first -cities[b-1].first)+ abs(cities[a-1].second- cities[b-1].second);
    long long closestToA=-1;
    long long closestDistA= 1e10;

    for(int i=0;i<k;i++)
    {
        if(abs(cities[i].first- cities[a-1].first) + abs(cities[i].second- cities[a-1].second) < closestDistA)
        {
            closestDistA= abs(cities[i].first- cities[a-1].first) + abs(cities[i].second- cities[a-1].second);
            closestToA= i;
        }
    }

    long long closestToB=-1;
    long long closestDistB= 1e10;
    for(int i=0;i<k;i++)
    {
        if(abs(cities[i].first- cities[b-1].first) + abs(cities[i].second- cities[b-1].second) < closestDistB)
        {
            closestDistB= abs(cities[i].first- cities[b-1].first) + abs(cities[i].second- cities[b-1].second);
            closestToB= i;
        }
    }
    long long ans= closestDistA + closestDistB;
    result= min(result, ans);
    cout<<result<<endl;
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