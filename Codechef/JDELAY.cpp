#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n,ans=0,a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if((b-a)>5)
        ans++;
    }
    cout<<ans<<"\n";
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