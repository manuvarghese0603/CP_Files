#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll int n,max=0,min,minindex,lmin=0;
    cin>>n;
    minindex=n;
    ll int a[n];
    for(ll int i=0;i<n;i++)
    cin>>a[i];
    min = a[0];
    max = min;
    for(ll int i=1;i<n;i++)
    {
        if(min>a[i])
        min=a[i];
        max = max + min;
    }
    cout<<max<<"\n";
}
int main()
{    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}