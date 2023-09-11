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


void solve()
{
    int n;
    cin>> n;
    vector<long long> candies(n);

    for(int i=0;i<n;i++)
    cin>> candies[i];

    long long sum=0;

    for(int i=0;i<n;i++)
    sum+= candies[i];

    // cout<<sum<<endl;
    if(sum%n==0)
    {
        long long givers=0;
        ll receivers=0;
        sort(candies.begin(), candies.end());
        ll toHave= sum/n;

        unordered_map<long long,ll> freq;

        priority_queue<long long, vector<long long>, greater<long long>> minHeap;
        priority_queue<long long> maxHeap;

        for(int i=0;i<n;i++)
        {
            if(candies[i]- toHave < 0)
            minHeap.push(candies[i]- toHave);
            else if(candies[i]- toHave > 0)
            maxHeap.push(candies[i]- toHave);
        }

        while(!minHeap.empty() && !maxHeap.empty())
        {
            int r= minHeap.top();
            minHeap.pop();
            int g= maxHeap.top();
            maxHeap.pop();

            int f= r+g;
            if(f>0)
            maxHeap.push(f);
            if(f<0)
            {
                cout<<"No"<<endl;
                return;
            }
        }
        if(!minHeap.empty())
        cout<<"No"<<endl;
        else
        cout<<"Yes"<<endl;
    }
    else
    cout<<"No"<<endl;
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