#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
  int x,y;
  cin>>x>>y;
  if(y>=x)
  {
    if(abs(y-x)%2 == 0)
    cout<<abs(y-x)/2<<"\n";
    else
    cout<<(abs(y-x+1)/2 + 1)<<"\n";
  }
  else
  cout<<abs(y-x)<<"\n";  
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