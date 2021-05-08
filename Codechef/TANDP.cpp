#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x,y,a,b,t,p;
        cin>>n>>m>>x>>y>>a>>b;
        t=(n-x)+(m-y);
        p=max((n-a),(m-b));
        //cout<<"__"<<t<<"__"<<p<<endl;
        if(t<=p)
        cout<<"YES";
        else
        cout<<"NO";
        cout<<endl;
    }
}