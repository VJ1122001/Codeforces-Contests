#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>> n;
    bool flag= false;
    int cntNeg= 0;
    vector<long long> nums(n);
    for(int i=0; i<n; i++)
    {
        cin>> nums[i];
        if(nums[i]==0)
        flag= true;

        if(nums[i] <0)
        cntNeg++;
    }

    if(flag) 
    {
        cout<<0<<endl;
        return;
    }

    if(cntNeg % 2 == 0)
    {
        cout<<1<<endl;
        cout<<1<<" "<<0<<endl;
    }
    else
    {
        cout<<0<<endl;
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