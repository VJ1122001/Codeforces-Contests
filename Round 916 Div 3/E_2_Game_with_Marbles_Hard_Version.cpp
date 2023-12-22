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

long long getScore(vector<long long>& A, vector<long long>& B)
{
    int n= A.size();
    long long score =0 ;
    for(int i=0; i<n; i++)
    score+= (A[i]- B[i]);

    return score;
}

// long long recur(vector<long long> A, vector<long long> B, bool turn)
// {
//     int n= A.size()

//     bool flag= false;
//     for(int i=0; i<n; i++)
//     {
//         if(A[i]!=0 && B[i]!=0)
//             flag= true;
//     }

//     if(!flag)
//     return getScore(A, B);

//     if(turn)
//     {
//         long long ans= -1e18;
//         for(int i=0; i<n; i++)
//         {
//             if(A[i]!=0 && B[i]!=0)
//             {
//                 vector<long long> newA= A;
//                 vector<long long> newB= B;
//                 newA[i]-=1;
//                 newB[i]=0;

//                 ans= max(ans,  recur(newA, newB, !turn));
//             }
//         }

//         return ans;
//     }
//     else
//     {
//         long long ans= 1e18;
//         for(int i=0; i<n; i++)
//         {
//             if(A[i]!=0 && B[i]!=0)
//             {
//                 vector<long long> newA= A;
//                 vector<long long> newB= B;
//                 newA[i]=0;
//                 newB[i]-=1;

//                 ans= min(ans,  recur(newA, newB, !turn));
//             }
//         }

//         return ans; 
//     } 

// }

void solve()
{
    int n;
    cin>> n;

    vector<long long> A(n), B(n);
    for(int i=0; i<n; i++)
    cin >> A[i];

    for(int i=0; i<n; i++)
    cin >> B[i];

    vector<pair<long long, int>> diff(n);
    for(int i=0; i<n; i++)
    diff[i]= {A[i]+ B[i], i};

    sort(diff.begin(), diff.end(), greater<pair<long long,int>>());
    long long ans=0;
    for(int i=0; i<n; i+=2)
    {
        ans+= A[diff[i].second]-1;
    }

    for(int i=1; i<n; i+=2)
    {
        ans-= B[diff[i].second]-1;
    }

    cout<<ans<<endl;
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