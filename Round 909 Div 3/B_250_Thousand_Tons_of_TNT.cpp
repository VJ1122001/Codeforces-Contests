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

// vector<long long> getFactors(long long n)
// {
//     set<long long> factors;
//     factors.insert(n);
//     int i=2;
//     while(n > 1)
//     {
//         while(n% i == 0)
//         {
//             factors.insert(i);
//             factors.insert(n/i);
//             n/=i;
//         }

//         i++;
//     }

//     factors.insert(n);
//     vector<long long> ans;
//     for(auto f: factors) ans.push_back(f);
//     return ans;
// }

void solve()
{
    int n;
    cin>> n;
    vector<long long> boxes(n);

    for(int i=0; i<n; i++)
    cin>> boxes[i];

    long long sum=0;
    vector<long long> prefix(n);
    for(int i=0; i<n; i++)
    {
        sum+= boxes[i];
        prefix[i]= sum;
    }

    // vector<long long> temp= getFactors(n);
    long long result= 0;
    // for(int i=0; i<temp.size(); i++)
    // cout<<temp[i]<<" ";
    // cout<<endl;

    for(int i=1; i<=n; i++)
    {
        if(n%i ==0)
        {
            long f= i;
            long long mn= LONG_LONG_MAX;
            long long mx= LONG_LONG_MIN;
            int prevj= 0;
            
            for(int j=f; j<n+1; j+=f)
            {
                if(prevj-1>=0)
                {
                    mn= min(prefix[j-1]- prefix[prevj-1], mn);
                    mx= max(prefix[j-1]- prefix[prevj-1], mx);
                }
                else
                {
                    mn= min(prefix[j-1], mn);
                    mx= max(prefix[j-1], mx);
                }
                prevj = j;
            }
            // cout<< f<<" "<< mx <<" "<< mn<<endl;
            result= max(result, mx- mn);
        }

    }
    cout<<result<<endl;

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