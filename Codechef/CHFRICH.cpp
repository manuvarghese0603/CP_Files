#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int a,b,x;
    cin>>a>>b>>x;
    cout<<(b-a)/x<<"\n";
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