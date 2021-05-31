#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll int t;
    cin>>t;
    while(t--)
    {
        ll int a,b,c,d,k,sum;
        cin>>a>>b>>c>>d>>k;
        sum=abs(a-c)+abs(b-d);
        cout<<sum<<endl;
        //cout<<"sum%2 = "<<sum%2<<" k%2 = "<<k%2<<endl;
        if(sum%2==k%2 && sum<=k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}