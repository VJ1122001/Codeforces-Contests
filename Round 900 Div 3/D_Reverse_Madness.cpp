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
    int n, k;
    cin>> n>> k;
    
    string s;
    cin>> s;

    vector<int> l(k);
    vector<int> r(k);

    for(int i=0;i<k;i++)
    cin>> l[i];

    for(int i=0;i<k;i++)
    cin>> r[i];

    int q;
    cin>> q;

    vector<int> prefix(n+1);

    for(int i=0; i<q; i++)
    {
        int x;
        cin>> x;

        int idx= lower_bound(r.begin(), r.end(), x)- r.begin();

        int mn= min(r[idx]+ l[idx]-x ,x);
        int mx= max(r[idx]+ l[idx]-x ,x);
        // cout<<mn<<" "<<mx<<endl;
        mn--;
        mx--;

        prefix[mn]++;
        prefix[mx]--;
        
    }

    int sum=0;
    for(int i=0;i<n+1;i++)
    {
        sum+= prefix[i];
        prefix[i]= sum;
    }

    for(int i=0;i<k;i++)
    {
        int st= l[i]-1;
        int en= r[i]-1;

        for(int k= st; k<st+ (en-st+1)/2; k++)
        {
            if(prefix[k]% 2)
            {
                swap(s[k], s[en-k +st]);
            }
        }
    }

    cout<<s<<endl;
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