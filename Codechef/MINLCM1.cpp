#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
  ll int x,k;
  cin>>x>>k;
  cout<<2*x<<" "<<(x*k)*((x*k) - 1)<<"\n";
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