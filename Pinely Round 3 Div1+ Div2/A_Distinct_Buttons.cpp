#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>> n;

    vector<int> x(n);
    vector<int> y(n);

    for(int i=0; i<n; i++)
    cin>> x[i] >> y[i];

    bool allPosX= true, allPosY= true, allNegY= true, allNegX= true;
    for(int i=0; i<n; i++)
    {
        if(x[i] > 0)
        allNegX = false;

        if(x[i] < 0)
        allPosX= false;

        if(y[i] < 0)
        allPosY= false;

        if(y[i] >0)
        allNegY = false;
    }

    if(allPosX || allPosY || allNegX || allNegY) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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