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
    vector<int> v(3);
    for(int i=0; i<3; i++) cin>>v[i];

    sort(v.begin(), v.end());

    if(v[0]== v[1] && v[0]== v[2]) 
    {
        cout<<"YES"<<endl;
        return;
    }

    if(v[0]== v[1])
    {
        if(v[2]== 2*v[1] || v[2]== 3*v[1] || v[2] == 4* v[1])
        {
            cout<<"YES"<<endl;
            return;
        }
    }

    if(v[1]== v[2] && !(v[1]%2) && v[1]/2 == v[0])
    {
        cout<<"YES"<<endl;
        return;
    } 

    if(v[1]== 2* v[0] && v[2]== 3* v[0])
    {
        cout<<"YES"<<endl;
        return;
    }

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