#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n,t;
    cin>>n;
    vector<int> v(n);
    vector<int> odd;
    vector<int> even;
    for(int i=0;i<n;i++)
    cin>>v[i]; 
    sort(v.begin(),v.end(),greater<int>());
    for(int i=0;i<n;i++)
    {
        if(v[i]%2 != 0)
        odd.push_back(v[i]);
        else
        even.push_back(v[i]);
    }
    int es=even.size(),os=odd.size();
    for(int i=0;i<es;i++)
    cout<<even[i]<<" ";
    for(int i=0;i<os;i++)
    cout<<odd[i]<<" ";
    cout<<"\n";
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