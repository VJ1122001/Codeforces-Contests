#include<bits/stdc++.h>
using namespace std;

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
    multiset<pair<long long,long long>, greater<pair<long long,long long>>> m;
    for(int i=n-1; i>=0; i--)
    {
        vector<pair<long long,long long>> erased;

        while(!m.empty() && m.begin()->first > v[i].second)
        {
            erased.push_back(*m.begin());
            m.erase(m.begin());
        }

        ans+= m.size();

        for(int j=0; j<erased.size(); j++)
        m.insert(erased[j]);

        m.insert({v[i].second, v[i].first});
    }



    // long long pairs=0;
    // for(int i=0; i<n-1; i++)
    // {
    //     if(v[i+1].second < v[i].second && v[i].second > v[i+1].first)
    //     {
    //         v[i+1].first= min(v[i+1].first, v[i].first);
    //         v[i+1].second= max(v[i].second, v[i+1].second);
    //         pairs++;                                             

    //     }
    //     else
    //     {
    //         ans+= pairs* (pairs+1)/2;
    //         pairs=0;
    //     }
        
    // }

    // ans+= pairs* (pairs+1)/2;

    
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