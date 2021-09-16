#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    if(n==2010 || n==2019 || (n>=2015 && n<=2017 ))
    cout<<"HOSTED\n";
    else
    cout<<"NOT HOSTED\n";
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