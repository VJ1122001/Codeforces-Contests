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
#define int long long


void solve()
{
    int n;
    cin>> n;
    vector<int> c(n);
    for(int i=0;i<n;i++)
    cin>> c[i];
    int k;
    cin>> k;
    int _k=k;

    vector<int> a(n+1,0);
    vector<int> b(n+1,0);
    priority_queue<pair<int,int>> pq1;

    for(int i=0;i<n;i++)
    pq1.push({c[i],i});

    while(!pq1.empty())
    {
        int coins= pq1.top().first;
        int idx= pq1.top().second;
        pq1.pop();
        int temp= k/coins;
        a[0]+=temp;
        a[idx+1]-=temp;
        k= k%coins;
    }

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq2;

    for(int i=0;i<n;i++)
    pq2.push({c[i],i});

    while(!pq2.empty())
    {
        int coins= pq2.top().first;
        int idx= pq2.top().second;
        pq2.pop();
        int temp= _k/coins;
        b[0]+=temp;
        b[idx+1]-=temp;
        _k= _k%coins;
    }

    int sum=0;
    for(int i=0;i<n+1;i++)
    {
        sum+= a[i];
        a[i]= sum;
    }

    sum=0;
    for(int i=0;i<n+1;i++)
    {
        sum+= b[i];
        b[i]= sum;
    }

    vector<int> ans= max(a,b);

    for(int i=0;i<n;i++)
    cout<<ans[i]<<" ";
    cout<<endl;

    // for(int i=0;i<n;i++)
    // cout<<b[i]<<" ";
    // cout<<endl;

}

int32_t main()
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