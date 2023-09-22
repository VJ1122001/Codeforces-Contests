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
    int countA=0;
    for(int i=0;i<s.size(); i++)
    if(s[i]=='A') countA++;

    if(s[0]=='B' || s[s.size()-1]=='B')
    {
        cout<<countA<<endl;
        return;
    } 

    bool flag= false;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]=='B' && s[i+1]=='B')
        flag= true;
    }

    if(flag)
    cout<<countA<<endl;
    else
    {
        int sum=0;
        int res=INT_MAX;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='B')
            {
                res= min(res, sum);
                sum=0;
            }
            else
            {
                sum++;
            }
        }

        res= min(res, sum);
        cout<<countA-res<<endl;
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