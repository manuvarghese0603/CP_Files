#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll int n,z=0;
    cin>>n;    
    for(ll int i=5;n/i>=1;i=i*5)
    z+=n/i;
    cout<<z<<endl;
}
int main()
{
    ll int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}