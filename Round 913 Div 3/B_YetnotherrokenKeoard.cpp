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

    stack<pair<int,int>> st1;
    stack<pair<int,int>> st2;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='b' && !st1.empty()) 
        {
            st1.pop();
            continue;
        }
        else if(s[i]=='b') continue;

        if(s[i]=='B' && !st2.empty()) 
        {
            st2.pop();
            continue;
        }
        else if(s[i]=='B') continue;

        
        if(s[i]>='a' && s[i]<='z')
            st1.push({i,s[i]});
        else
            st2.push({i,s[i]});

    }

    vector<pair<int,int>> temp;
    while(!st1.empty()) 
    {
        temp.push_back(st1.top());
        st1.pop();
    }

    while(!st2.empty()) 
    {
        temp.push_back(st2.top());
        st2.pop();
    }

    sort(temp.begin(), temp.end());
    string ans;
    for(auto x: temp)
    ans.push_back(x.second);

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