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
    int n, a, q;
    cin>> n>> a>> q;

    int temp=a;

    string notifications;
    cin>> notifications;

    if(a==n)
    {
        cout<<"YES"<<endl;
        return;
    }
    for(int i=0;i<q;i++)
    {
        if(notifications[i]=='+') a++;
        else a--;

        if(a==n)
        {
            cout<<"YES"<<endl;
            return;
        }
    }

    int l=0;
    int r= temp;

    for(int i=0;i<q;i++)
    {
        if(notifications[i]=='+')
        r++;
        else 
        l--;
    }

    // cout<<r<<endl;
    if(r>=n)
    cout<<"MAYBE"<<endl;
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