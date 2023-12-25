#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k, d;
    cin>> n >> k >> d;
    vector<long long> nums(n);
    vector<long long> v(k);

    for(int i=0; i<n; i++)
    cin>> nums[i];

    for(int i=0; i<k; i++)
    cin>> v[i];


    function<long long()> getValue= [&]() -> int
    {
        long long ans=0;
        for(int i=0; i<n; i++)
        {
            if(nums[i]== i+1)
            ans++;
        }
        return ans;
    };

    function<void(int)> update= [&](int idx)
    {
        for(int i=0; i<v[idx]; i++)
        {
            nums[i]++;
        }
    };

    long long result=0;
    for(long long i=0; i<min(2*n,d); i++)
    {
        long long ans= getValue();
        update(i%k);
        result= max(result, ans+ (d- i-1)/2);
    }
    cout<<result<<endl;
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