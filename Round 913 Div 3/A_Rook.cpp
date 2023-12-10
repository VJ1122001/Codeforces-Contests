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

    for(char ch= '1'; ch<='8'; ch++)
    {
        string temp;
        temp.push_back(s[0]);
        temp.push_back(ch);
        if(temp== s)
        continue;

        cout<<temp<<endl;
    }

    for(char ch= 'a'; ch<='h'; ch++)
    {
        string temp= "";
        temp.push_back(ch);
        temp.push_back(s[1]);
        
        if(temp== s)
        continue;

        cout<<temp<<endl;
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