#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>> n;
    vector<long long> nums(n);

    for(int i=0; i<n; i++)
    cin>> nums[i];

    long long sum=0;
    for(int i=0; i<n; i++)
        sum+= nums[i];

    double sqr= sqrt(sum);
    long long sqr1= ceil(sqr);

    if(sqr1 == (long long)sqr)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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