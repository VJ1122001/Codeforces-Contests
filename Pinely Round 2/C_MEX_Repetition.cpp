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
    long long n,k;
    cin>> n>> k;

    vector<int> a(n);
    
    for(int i=0;i<n;i++)
    cin>> a[i];

    set<int> present;
    for(int i=0;i<n;i++)
    present.insert(a[i]);

    int i=0;
    for(; i<=n; i++)
    {
        if(!present.count(i)) break;
    }

    // cout<<i<<endl;

    int ops= k%(n+1);
    deque<int> q;

    for(int i=0;i<n;i++)
    q.push_back(a[i]);
    
    vector<int> ans(n);
    for(int j=0;j<ops;j++)
    {
        int x= q.back();
        q.pop_back();
        q.push_front(i);
        present.erase(x);
        present.insert(i);
        i=x;
    }
    

    for(auto j: q)
    cout<<j<<" ";
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