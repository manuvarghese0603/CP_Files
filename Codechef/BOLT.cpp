#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float k1,k2,k3,v,ans;
        cin>>k1>>k2>>k3>>v;
        ans=100/(k1*k2*k3*v);
        int c = 100*ans+0.5;
        if(c<958)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}