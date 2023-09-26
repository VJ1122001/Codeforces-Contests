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
    vector<long long> cards(n);

    for(int i=0;i<n;i++)
    cin>> cards[i];

    long long score=0;

    if(cards[0]>=0 ||(cards[0]<=0 && cards[1]<=0))
    {
        for(int i=0;i<n;i++)
        score+= max(0LL, cards[i]);

        cout<<score<<endl;
        return;
    }

    for(int i=2;i<n;i++)
    score+= max(0LL, cards[i]);

    score+= max(0LL, cards[0]+ cards[1]);
    cout<<score<<endl;
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