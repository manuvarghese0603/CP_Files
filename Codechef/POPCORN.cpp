#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int a,b,max=0;
    for(int i=0;i<3;i++)
    {
        cin>>a>>b;
        if(max<a+b)
        max=a+b;
    }
    cout<<max<<"\n";
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