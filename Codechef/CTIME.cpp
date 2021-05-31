#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll int t;
    cin>>t; //overlap condition?
    while(t--)
    {
        ll int n,k,f,sum=0,a,b;
        cin>>n>>k>>f;
        while(n--)
        {
            cin>>a>>b;
            sum=sum+b-a;
        }
        if((f-sum)>=k)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}
