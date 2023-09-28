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

int bin_search(vector<vector<long long>>& prefix, int l, int r, int x)
{
    int ans=-2;
    int left=l;

    while(l<=r)
    {
        // cout<<l<<" "<<r<<endl;
        int mid= (l+r)/2;
        long long num=0;

        for(int i=0;i<32;i++)
        {
            if((left-1)>=0 && ((prefix[mid][i]- prefix[left-1][i])== mid-left+1))
            {
                num |= (1<<i);
                // cout<<i<<" ";
            }
            else if(left==0 && (prefix[mid][i]== mid+1))
            {
                num |= (1<<i);
                // cout<<i<<" ";
            }
            
        }
        // cout<<endl;
        // cout<<mid<<" "<<num<<endl;

        if(num >= x)
        {
            ans= max(ans,mid);
            l= mid+1;
        }
        else
        {
            r= mid-1;
        }
    }

    return ans;
}

void solve()
{
    int n;
    cin>> n;
    vector<long long> nums(n);

    for(int i=0;i<n;i++)
    cin>> nums[i];

    int q;
    cin>> q;

    vector<vector<long long>> prefix(n+1, vector<long long>(32,0));

    for(int i=0;i<32; i++)
    {
        int sum=0;
        for(int j=0; j<n; j++)
        {
            if((1<<i)& nums[j])
            {
                sum++;
            }
            prefix[j][i]= sum;
        }
    }

    // for(int j=0; j<32; j++)
    // {
    //     for(int i=0;i<n;i++)
    //     cout<<prefix[i][j]<<" ";
    //     cout<<endl;
    // }

    for(int i=0;i<q;i++)
    {
        int l,k;
        cin>> l>> k;

        int r= bin_search(prefix,l-1,n-1,k);
        cout<<r+1<<" ";
    }

    cout<<endl;
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