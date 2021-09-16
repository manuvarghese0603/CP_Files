#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
   char c;
   cin>>c;
   if(c == 'B' || c=='b')
   cout<<"BattleShip\n";
   if(c == 'C' || c=='c')
   cout<<"Cruiser\n";
   if(c == 'D' || c=='d')
   cout<<"Destroyer\n";
   if(c == 'F' || c=='f')
   cout<<"Frigate\n";
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