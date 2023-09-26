#include <bits/stdc++.h>
#include <fstream>
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

int result=0;
// void recur(vector<set<int>>& given, int i, set<int>& s, set<int> path)
// {
//     if(i== given.size())
//     {
//         if(path!=s)
//             result= max(result, (int)path.size());
//         return;
//     }

//     recur(given,i+1, s, path);
    
//     for(auto x: given[i])
//         path.insert(x);
//     recur(given, i+1, s, path);
// }

void solve()
{
    int n;
    cin>> n;
    vector<set<int>> given(n);
    set<int> s;

    for(int i=0;i<n;i++)
    {
        int sz;
        cin>> sz;
        // cout<<sz<<" ";

        for(int j=0; j<sz; j++)
        {
            int x;
            cin>> x;
            // cout<<x<<" ";
            given[i].insert(x);
            s.insert(x);
        }
    }

    
    // recur(given, 0, s, {});

    for(int i=1; i<=50; i++)
    {
        set<int> temp;
        if(s.count(i))
        {
            for(int j=0 ;j<n;j++)
            {
                if(!given[j].count(i))
                {
                    for(auto ele: given[j])
                    temp.insert(ele);
                }
            }
        }
        result= max(result, (int)temp.size());
    }

    cout<<result<<endl;
    result=0;
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