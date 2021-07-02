#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if((a+c == 180) && (b+d ==180))
    cout<<"YES\n";
    else
    cout<<"NO\n";
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