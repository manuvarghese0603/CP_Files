#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,xr,yr,d;
        cin>>x>>y>>xr>>yr>>d;
        if(min(x/xr,y/yr)<d)
        cout<<"NO";
        else
        cout<<"YES";
        cout<<endl;
    }
}