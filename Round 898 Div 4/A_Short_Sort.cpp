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
    string s;
    cin>> s;

    if(s == "abc")
    {
        cout<<"YES"<<endl;
        return;
    }
    else
    {
        bool flag= false;
        for(int i=0;i<3;i++)
        {
            if((s[i]-'a')== i)
            flag= true;
        }

        if(flag== true)
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