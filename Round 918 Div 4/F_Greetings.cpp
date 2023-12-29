#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    int n;
    cin>>n;
    vector<long long> a(n);
    vector<long long> b(n);

    for(int i=0; i<n; i++)
    cin>> a[i] >> b[i];
    vector<pair<long long,long long>> v;
    for(int i=0; i<n; i++)
    v.push_back({a[i], b[i]});
    sort(v.begin(), v.end());

    long long ans=0;
    ordered_set<long long> s;
    for(int i=n-1; i>=0; i--)
    {
        ans+= s.order_of_key(v[i].second);
        s.insert(v[i].second);
    }
  
    cout<<ans<<endl;
}

int main()
{
    int t=1;
    cin>> t;
    while(t--)
    {
        solve();
    }
}