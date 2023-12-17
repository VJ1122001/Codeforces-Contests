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
    vector<long long> nums(n);

    for(int i=0; i<n; i++)
    cin>> nums[i];

    vector<long long> temp= nums;
    auto it= min_element(temp.begin(), temp.end());
    vector<long long> t1(it, temp.end());
    vector<long long> t2(it, temp.end());
    sort(t2.begin(), t2.end());

    if(t1== t2)
    {
        cout<< it- temp.begin()<<endl;
    }
    else
    {
        cout<<-1<<endl;
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