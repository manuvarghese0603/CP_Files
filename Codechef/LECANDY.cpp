#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
   int n,c,s=0,t;
   cin>>n>>c;
   //vector<int> v(n);
   for(int i=0;i<n;i++)
   {
       cin>>t;
       s+=t;
   }
   if(s<=c)
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