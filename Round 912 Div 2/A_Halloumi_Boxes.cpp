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
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    for(int i=0; i<n; i++)
    cin>> A[i];

    vector<int> temp= A;
    sort(temp.begin(), temp.end());

    if(k>=2)
    cout<<"YES"<<endl;
    else 
    {
        if(A== temp)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
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