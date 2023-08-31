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
    vector<int> p(n);

    for(int i=0;i<n;i++)
    cin>> p[i];


    unordered_map<int,int> idx;

    for(int i=0;i<n;i++)
        idx[p[i]]= i+1;

    int prev=0;
    int count=0;
    for(int i=1; i<=n; i++)
    {
        // cout<<idx[i]<<" "<<prev<<endl;
        if(idx[i] < prev)
        {
            count++;
        }
        prev= idx[i];
    }

    cout<<count<<endl;

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