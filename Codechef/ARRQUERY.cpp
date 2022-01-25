#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
  int n,q;
  cin>>n>>q;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  while(q--)
  {
      int l,r,x,flag=1;
      cin>>l>>r>>x;
      for(int i=(l-1);i<r;i++)
      {
          if(a[i]>=x)
          {
              cout<<(r-i)<<"\n";
              flag--;
              break;
          }
      }
      if(flag)
      cout<<"0\n";
  }
}
int main()
{    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();    
    return 0;
}