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
    vector<int> A(n), B(n);

    for(int i=0; i<n; i++)
    cin>> A[i];

    for(int i=0; i<n; i++)
    cin>> B[i];

    vector<pair<int,int>> A1(n), B1(n);
    for(int i=0; i<n; i++)
    {
        A1[i]= {A[i], i};
        B1[i]= {B[i], i};
    }

    sort(A1.begin(), A1.end());
    sort(B1.begin(), B1.end());

    vector<pair<int,int>> tempB(n);
    for(int i=0; i<n; i++)
    {
        // cout<<(i-x+n)% n <<endl;
        if(i+x < n)
            tempB[i]= B1[i+x];
        else
        tempB[i]= B1[(i+x)% n];
    }
    
    vector<int> ans(n);

    for(int i=0; i<n; i++)
        ans[A1[i].second]= tempB[i].first;

    // for(int i=0; i<n; i++)
    //     cout<<tempB[i].first<<" ";
    // cout<<endl;

    // for(int i=0; i<n; i++)
    //     cout<<ans[i]<<" ";
    // cout<<endl;

    
    int beauty=0;
    for(int i=0; i<n; i++)
    if(ans[i] < A[i])
    beauty++;

    if(beauty==x)
    {
        cout<<"YES"<<endl;
        for(int i=0; i<n; i++)
        cout<<ans[i]<<" ";
        cout<<endl;
    }
    else
    cout<<"NO"<<endl;

    
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