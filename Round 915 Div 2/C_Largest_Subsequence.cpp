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

bool compare(pair<char,int>& A, pair<char,int>& B)
{
    if(A.first != B.first)
    return A.first > B.first;
    else
    return A.second < B.second;
}

void solve()
{
    int n;
    cin>> n;
    string s;
    cin>> s;

    string temp= s;
    sort(temp.begin(), temp.end());
    if(temp == s)
    {
        cout<<0<<endl;
        return;
    }

    long long ans=0;
    auto it= max_element(s.begin(), s.end());

    vector<pair<char,int>> v;
    for(int i=0; i<n; i++)
    v.push_back({s[i],i});
    sort(v.begin(), v.end(), compare);
    vector<int> indices;

    indices.push_back(v[0].second);
    int pidx= v[0].second;
    for(int i=1; i<n; i++)
    {
        if(v[i].second > indices.back())
        {
            indices.push_back(v[i].second);
            pidx= v[i].second;
        }
    }


    int k= indices.size();
    // for(int i=0; i<k; i++)
    // cout<<indices[i]<<" ";
    // cout<<endl;

    vector<int> temp2= indices;
    reverse(temp2.begin(), temp2.end());

    unordered_map<int,int> f;
    for(int i=0; i<k; i++)
    f[s[indices[i]]]++;

    for(int i=0; i<k/2; i++)
        swap(s[indices[i]], s[indices[k-i-1]]);

    // cout<<s<<" "<<temp<<endl;

    if(temp== s)
    {
        cout<<k - f[*it] <<endl;
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