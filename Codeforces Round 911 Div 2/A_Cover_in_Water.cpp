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
    string temp, s;
    cin>> temp;

    // s.push_back('#');
    s+= temp;
    // s.push_back('#');
    int ans=0;
    if(s.find("...")== string::npos)
    {
        int i=0;
        int j=0;
    
        while(j<n)
        {
            while(i<n && s[i]=='#') i++;
            // cout<<i <<endl;
            j=i+1;
            while(j<n && s[j]=='.') j++;

            if(i<=n && j<=n)
            {
                if (j-i ==1)
                ans+= 1;
                else 
                ans+=2;
            }
            // cout<< j <<" "<< i<<endl;
            // cout<< j-i-1<<endl;
            i=j; 
            
        }
    }
    else ans=2;
    cout<<ans<<endl;
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