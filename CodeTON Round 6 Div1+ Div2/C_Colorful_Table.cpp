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
    int n,k;
    cin>> n>> k;

    vector<int> a(n);
    for(int i=0;i<n;i++)
    cin>> a[i];

    vector<int> ans(k,0);

    vector<vector<int>> colors(k);
    for(int i=0;i<n;i++)
        colors[a[i]-1].push_back(i);

    set<int> available;
    for(int i=0;i<n;i++)
    available.insert(i);
    
    for(int i=0; i<k;i++)
    {
        if(colors[i].empty()) continue;

        ans[i]= 2* (*available.rbegin() - *available.begin()+1);
        for(int j= 0; j<colors[i].size(); j++)
        {
            available.erase(colors[i][j]);
        }
    }

    for(int i=0;i<k;i++)
    cout<< ans[i]<<" ";
    cout<<endl;
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