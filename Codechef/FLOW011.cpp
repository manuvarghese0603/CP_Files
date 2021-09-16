#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
   double ans,s;
   cin>>s;
   if(s<1500)
   ans=s*2;
   else
   ans = s+s*0.98+500;
   cout<<fixed<<setprecision(2)<<ans<<"\n";
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