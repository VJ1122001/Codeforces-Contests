#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>> n;
    string s;
    cin>> s;

    string type(n,'.');

    for(int i=0; i<n; i++)
    {
        if(s[i]=='a' || s[i]=='e')
        type[i]='v';
        else
        type[i]='c';
    }

    vector<bool> extra(n, false);
    for(int i=1; i<n; i++)
    {
        if(type[i]=='c' && type[i-1]=='c')
        extra[i-1]= true;
    }

    string ns;
    for(int i=0; i<n; i++)
    {
        ns.push_back(s[i]);
        if(extra[i]== true)
        {
            ns.push_back('.');
        }
    }

    string ans;

    int m= ns.size();

    vector<string> partitions;
    string p;
    for(int i=0; i<m; i++)
    {
        if(ns[i]=='.')
        {
            partitions.push_back(p);
            p.clear();
        }
        else
            p.push_back(ns[i]);
    }
    partitions.push_back(p);

    for(auto temp: partitions)
    {
        int it=0;
        while(it< temp.size())
        {
            ans.push_back(temp[it]);
            if(it%2 && temp.size()-it >=3)
            {
                ans.push_back('.');
            }
            it++;
        }
        ans.push_back('.');
    }

    ans.pop_back();
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