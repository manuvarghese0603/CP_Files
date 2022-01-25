#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
  int n,d;
  cin>>n>>d;
  int a,cnt=0;
  while(n--)
  {
      cin>>a;
      if(a>=d)
      cnt++;
  }
  cout<<cnt<<"\n";
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