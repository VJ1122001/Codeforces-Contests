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

// vector<int> seive;
// int N= 1e6+1;

// void form_seive()
// {
//     if(seive.empty())
//     {
//         seive.resize(N,0);
//         seive[0]= -1;
//         seive[1]= -1;
//     }

//     for(long long i=2;i<N;i++)
//     {
//         if(seive[i]==0)
//         {
//             for(long long j= i*i; j<N; j+=i)
//             {
//                 if(!seive[j])
//                     seive[j]= i;
//             }
//         }
//     }
// }

void makeDivisors(int num, unordered_map<int,int>& freq)
{
    int i=2;

    while(i*i <= num)
    {
        while(num % i == 0)
        {
            freq[i]++;
            num/=i;
        }
        i++;
    }
    
    if(num > 1) freq[num]++;
}

void solve()
{
    int n;
    cin>> n;
    vector<int> nums(n);

    for(int i=0; i<n; i++)
    cin>> nums[i];

    // form_seive();
    // for(int i=0; i<100; i++)
    // // cout<<seive[i]<<" ";
    // // cout<<endl;
    // cout<<seive[100]<<endl;

    unordered_map<int,int> freq;

    for(int i=0; i<n; i++)
    {
        makeDivisors(nums[i], freq);
    }

    for(auto x : freq)
    {
        if(x.second% n != 0)
        {
            cout<<"NO"<<endl;
            return;
        }
        // cout<<x.first<<" "<<x.second<<endl;
    }

    cout<<"YES"<<endl;
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