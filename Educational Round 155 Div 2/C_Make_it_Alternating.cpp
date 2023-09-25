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

long long fact[200001];

void solve()
{
    string s;
    cin>> s;

    int n= s.size();
    long long ans1=0;
    long long ans2=1;

    for(int i=0;i<n;)
    {
        char c= s[i];
        int j=i;
        while(j<n && s[j]==c)
            j++;
        
        int cnt= j-i;

        if(cnt>1)
            ans1+= cnt-1;

        long long temp=1;

        ans2*= cnt % mod;
        ans2%= mod;

        i=j;
    }

    ans2*= fact[ans1]% mod;
    cout<<ans1<<" "<<ans2% mod<<endl;
}

int main()
{
    fast_io;
    int t;
    t = 1;
    cin >> t;

    fact[0]=1;
    for(int i=1; i<200001; i++)
    {
        fact[i]= (fact[i-1]* i)% mod;
    }

    while (t--)
    {
        solve();
    }
    return 0;
}