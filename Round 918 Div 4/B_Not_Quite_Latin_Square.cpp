#include<bits/stdc++.h>
using namespace std;

void solve()
{
    vector<string> square(3);

    for(int i=0; i<3; i++)
    cin>> square[i];

    vector<vector<bool>> row(3, vector<bool>(3));
    // vector<vector<bool>> col(3, vector<bool>(3));

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(square[i][j]!='?')
            {
                row[i][square[i][j]-'A']= true;
                // col[i][square[i][j]-'A']= true;
            }
        }
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(row[i][j]== false)
            {
                cout<<(char)('A'+ j)<<endl;
                break;
            }
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