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

// bool isMostCommon(int i, int j, vector<int> &a, int& k)
// {
//     unordered_map<int,int> freq;
//     for(int l=i;l<=j; l++)
//     {
//         freq[a[l]]++;
//     }
//     // cout<<i<<j<<endl;
//     for(auto x: freq)
//     {
//         if(x.first!=k)
//         {
//             if(x.second >=freq[k])
//             return false;
//         }
//     }

//     return true;
// }

void solve()
{
    int n,k;
    cin>> n>> k;

    vector<int> a(n);
    for(int i=0;i<n;i++)
    cin>> a[i];

    unordered_map<int,int> freq;
    for(int i=0;i<n;i++)
    {
        freq[a[i]]++;
    }
    
    if(freq[k])
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
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