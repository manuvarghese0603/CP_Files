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
        if(n%2!=0)
        {
            if(x%k==0 && x%2==0)
            cout<<"YES";
            else 
            cout<<"NO";
        }
        else 
        cout<<"YES";
        cout<<"\n";
    }
}