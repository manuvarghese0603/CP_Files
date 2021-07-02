#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll int n,temp;
    cin>>n;
    vector<ll int> a;
    while(n--)
    {
        ll int s,v,p;
        cin>>s>>p>>v;
        temp = (p/(s+1))*v;
        a.push_back(temp);
    }
    cout<<*max_element(a.begin(),a.end())<<"\n";
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