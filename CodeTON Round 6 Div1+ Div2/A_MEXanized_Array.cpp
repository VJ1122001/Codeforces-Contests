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
    int n,k,x;
    cin>> n>> k>> x;

    if((x< (k-1)) || (n<k))
    {
        // cout<<n<<" "<<k<<" "<<x<<endl;
        cout<<"-1"<<endl;
        return;
    }
    else
    {
        int i=0;
        long long sum=0;
        for(i=0;i<k;i++)
            sum+=i;

        while(i<n)
        {
            if(k!=x)
                sum+= x;
            else
                sum+= x-1;
            i++;
        }
        cout<<sum<<endl;
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