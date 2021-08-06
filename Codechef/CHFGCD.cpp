#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll int x,y,mx,mn,ans,count=0;
    cin>>x>>y;
    mx = max(x,y);
    mn = min(x,y);
    ans = __gcd(x,y);
    if(ans>1)
    cout<<"0\n";
    else if (__gcd(x+1,y)>1 || __gcd(x,y+1)>1)
    cout<<"1\n";
    else
    cout<<"2\n";
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