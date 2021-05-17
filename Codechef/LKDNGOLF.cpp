#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,x,k;
        cin>>n>>x>>k;
        if(x%k!=0)
        {
            if(((n+1)-x)%k==0)
            cout<<"YES";
            else 
            cout<<"NO";
        }
        else 
        cout<<"YES";
        cout<<"\n";
    }
}