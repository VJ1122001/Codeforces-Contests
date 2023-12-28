#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>> n;
    vector<long long> nums(n);

    for(int i=0; i<n; i++)
    cin>> nums[i];

    bool hasOdd= false;
    bool hasEven= false;

    for(int i=0; i<n; i++)
    {
        if(nums[i] % 2) hasOdd= true;
        else hasEven= true;
    }

    // for(int i=0; i<n; i++)
    // {
    //     cout<<nums[i]% 12<<endl;
    // }

    if(hasOdd && hasEven) cout<<2<<endl;
    else
    {
        
        long long mul=4;
        while(true)
        {
            set<long long> dis;
            vector<long long> temp= nums;
            for(int i=0; i<n; i++)
            {
                temp[i]%= mul;
                dis.insert(temp[i]);
            }

            if(dis.size()==2)
            {
                cout<<mul<<endl;
                break;
            }
            mul*=2;
        }
        
    }
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