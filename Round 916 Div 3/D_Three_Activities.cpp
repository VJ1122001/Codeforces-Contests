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

long long tempSolve(vector<long long>& a, vector<long long>& b, vector<long long>& c)
{
    int n= a.size();
    multiset<pair<long long, int>, greater<pair<long long,int>>> ma, mb, mc;
    for(int i=0; i<n; i++)
    {
        ma.insert({a[i], i});
        mb.insert({b[i], i});
        mc.insert({c[i], i});
    }

    long long ans=0;
    for(int i=0; i<n; i++)
    {
        long long temp=0;
        temp +=a[i];
        // cout<<i<<endl;
        mb.erase(mb.find({b[i], i}));
        mc.erase(mc.find({c[i], i}));
        
        
        auto mxB= *mb.begin();
        auto mxC= *mc.begin();

        if(mxB.second== mxC.second)
        {
            mb.erase(mb.begin());
            mc.erase(mc.begin());
            auto smxB= *mb.begin();
            auto smxC= *mc.begin();

            long long temp2= max(smxB.first+ mxC.first, smxC.first+ mxB.first);
            ans= max(ans, temp+ temp2);

            mb.insert(mxB);
            mc.insert(mxC);
        }
        else
        {
            ans= max(ans, temp+ mxB.first+ mxC.first);
        }

        mb.insert({b[i], i});
        mc.insert({c[i], i});

    }

    return ans;

}

void solve()
{
    int n;
    cin>> n;
    vector<long long> a(n);
    vector<long long> b(n);
    vector<long long> c(n);

    for(int i=0; i<n; i++)
    cin>> a[i];
    for(int i=0; i<n; i++)
    cin>> b[i];
    for(int i=0; i<n; i++)
    cin>> c[i];

    // multiset<pair<long long, int>, greater<pair<long long,int>>> ma, mb, mc;
    // for(int i=0; i<n; i++)
    // {
    //     ma.insert({a[i], i});
    //     mb.insert({b[i], i});
    //     mc.insert({c[i], i});
    // }

    long long ans=0;
    // for(int i=0; i<n; i++)
    // {
    //     long long temp=0;
    //     temp +=a[i];
    //     // cout<<i<<endl;
    //     mb.erase(mb.find({b[i], i}));
    //     mc.erase(mc.find({c[i], i}));
        
        
    //     auto mxB= *mb.begin();
    //     auto mxC= *mc.begin();

    //     if(mxB.second== mxC.second)
    //     {
    //         mb.erase(mb.begin());
    //         mc.erase(mc.begin());
    //         auto smxB= *mb.begin();
    //         auto smxC= *mc.begin();

    //         long long temp2= max(smxB.first+ mxC.first, smxC.first+ mxB.first);
    //         ans= max(ans, temp+ temp2);

    //         mb.insert(mxB);
    //         mc.insert(mxC);
    //     }
    //     else
    //     {
    //         ans= max(ans, temp+ mxB.first+ mxC.first);
    //     }

    //     mb.insert({b[i], i});
    //     mc.insert({c[i], i});

    // }
    long long ans1= tempSolve(a, b, c);
    // cout<<ans1<<endl;
    long long ans2=  tempSolve(b, c, a);
    // cout<<ans2<<endl;
    long long ans3 = tempSolve(c, a, b);
    // cout<<ans3<<endl;

    cout<<max({ans1, ans2, ans3})<<endl;

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