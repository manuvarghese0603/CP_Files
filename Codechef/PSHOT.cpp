#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n,a=0,b=0,ans=0;
    string s;
    cin>>n>>s;
    ans = n+1;
    for(int i=0;i<(n+1);i=i+2)
    {
        if(s[i] == '1')
        a++;
        if(s[i+1] == '1')
        b++;
    }
    cout<<"a: "<<a<<" b: "<<b<<"Ans: "<<ans<<"\n";
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