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
    int n,m;
    cin>>n>>m;

    vector<vector<char>> board(n, vector<char>(m));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cin>> board[i][j];
    }

    vector<vector<char>> board1(n, vector<char>(m,'.'));
    vector<vector<char>> board2(n, vector<char>(m,'.'));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        if(board[i][j]=='L' || board[i][j]=='R')
        board1[i][j]= board[i][j];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        if(board[i][j]=='U' || board[i][j]=='D')
        board2[i][j]= board[i][j];
    }

    unordered_map<int,int> mp;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(board1[i][j]=='L' || board1[i][j]=='R')
                mp[j]++;
        }
    }

    for(int i=0; i<m;i++)
    if(mp[i]%2!=0)
    {
        cout<<"-1"<<endl;
        return;
    }

    mp.clear();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(board2[i][j]=='U' || board2[i][j]=='D')
                mp[i]++;
        }
    }

    for(int i=0; i<n;i++)
    if(mp[i]%2!=0)
    {
        cout<<"-1"<<endl;
        return;
    }

    
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