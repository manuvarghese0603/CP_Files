#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
  int a,b,c;
  cin>>a>>b>>c;
  if(a==7 || b==7 || c==7)
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