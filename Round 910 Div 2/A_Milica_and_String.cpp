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
    cin>> n >> k;
    string s;
    cin>> s;

    int countB=0;
    for(auto c: s)
        if(c=='B') countB++;

    if(countB == k)
    {
        cout<<0<<endl;
    }
    else{
        cout<<1<<endl;
        if(k- countB > 0)
        {
            int cA=0;
            int i=0;
            for(i=0; i<n && cA < (k-countB); i++)
                if(s[i]=='A')
                cA++;
            cout<< i<<" "<<"B"<<endl;
        }
        else
        {
            int cb=0;
            int i=0;
            for(i=0; i<n && cb < (countB- k); i++)
                if(s[i]=='B')
                cb++;
            cout<< i<<" "<<"A"<<endl;
        }
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