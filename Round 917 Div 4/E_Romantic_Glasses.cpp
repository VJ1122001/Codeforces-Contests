#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>> n;
    vector<long long> nums(n);

    for(int i=0; i<n; i++)
    cin>> nums[i];

    for(int i=0; i<n; i+=2)
    {
        nums[i]*=-1;
    }

    unordered_map<long long,int> freq;
    freq[0]=1;
    long long sum=0;
    for(int i=0; i<n; i++)
    {
        sum+= nums[i];
        freq[sum]++;
        if(freq[sum]==2)
        {
            cout<<"YES"<<endl;
            return;
        }
    }

    for(int i=0; i<n; i+=2)
    {
        nums[i]*=-1;
    }

    for(int i=1; i<n; i+=2)
    {
        nums[i]*=-1;
    }

    freq.clear();
    freq[0]=1;
    sum=0;
    for(int i=0; i<n; i++)
    {
        sum+= nums[i];
        freq[sum]++;
        if(freq[sum]==2 ) 
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    
    cout<<"NO"<<endl;

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