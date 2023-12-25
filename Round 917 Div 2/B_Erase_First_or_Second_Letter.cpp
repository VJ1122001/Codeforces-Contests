#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>> n;

    string s;
    cin>> s;
    
    long long ans=0;
    vector<long long> f(26,-1);
    for(int i=0 ;i<n; i++)
    {
        char c= s[i];
        if(f[c-'a']==-1)
        {
            f[c-'a']= i;
            ans+= n-i;
        }
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