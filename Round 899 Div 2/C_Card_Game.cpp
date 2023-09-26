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

    for(int i=0;i<n; i+=2)
    {
        // cout<<i<<endl;
        int odd= i;
        int even= i+1;

        if(even==n)
        {
            if(cards[odd]>0)
                score+= cards[odd];
            break;
        }

        if(cards[odd]<=0 && cards[even] <=0)
        {
            continue;
        }
        else if(cards[odd]<=0 && cards[even]>=0)
        {
            if((cards[even]+ cards[odd]) > 0)
                score+= cards[odd]+ cards[even];
            else
            {
                cards[even]=0;
                i--;
            }
            continue;
        }
        else if(cards[odd]>=0 && cards[even]<=0)
        {
            score+= cards[odd];
            continue;
        }
        else if(cards[odd]>=0 && cards[even]>=0)
        {
            score+= cards[odd]+ cards[even];
            continue;
        }
    }

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