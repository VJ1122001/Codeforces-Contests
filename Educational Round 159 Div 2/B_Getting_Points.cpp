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

bool isValid()
{

}

void solve()
{
    long long n,p,l,t;
    cin>> n >> p >> l >> t;

    long long mxPracticals = ceil((double)n/7);
    long long numDaysWork = ceil((double)p/ (2*t+ l));

    if(numDaysWork * 2 > mxPracticals)
    {
        numDaysWork= (mxPracticals/2);

        long long gained_points= (2*t+l)* numDaysWork;
        if(mxPracticals % 2)
        {
            long long pointsGainedNextDay= t+l;
            gained_points += pointsGainedNextDay;
            numDaysWork++;

        }
        long long requiredPoints= max(0LL,(p- gained_points));
        numDaysWork+= ceil((double)requiredPoints/l);    
    }

    cout <<  n- numDaysWork <<endl;
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