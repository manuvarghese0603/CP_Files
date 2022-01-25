#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int i=0,e=0,n=5,a;
    while(n--)
    {
        cin>>a;
        if(a==1)
        i++;
        else if(a==2)
        e++;
    }
    if(i>e)
    cout<<"INDIA\n";
    else if(i<e)
    cout<<"ENGLAND\n";
    else
    cout<<"DRAW\n";
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