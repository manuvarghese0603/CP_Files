#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int D,d,a,b,c,mul;
        cin>>D>>d>>a>>b>>c;
        mul=D*d;
        if(mul>=42)
        cout<<c;
        else if(mul>=21)
        cout<<b;
        else if(mul>=10)
        cout<<a;
        else
        cout<<"0";
        cout<<endl;
    }
}