#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
  int x,n,p;
  cin>>n>>x>>p;
  if(((x*3)-(n-x)) >= p)
  cout<<"PASS\n";
  else
  cout<<"FAIL\n";
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