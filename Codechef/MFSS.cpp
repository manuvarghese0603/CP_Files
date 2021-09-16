#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n,sum=INT_MIN;
    cin>>n;
    int a[n];
    map<int,int> mp;
    for(int i=0;i<n;i++)
    cin>>a[i]; 
    for(int i=0;i<n;i++)
    {
        sum = a[i];
        mp[sum]++;
        for(int j=(i+1);j<n;j++)
        {
            sum+=a[j];
            mp[sum]++;
        }
    }  
    for(auto i: mp)
    cout<<i.first<<" "<<i.second<<"\n";
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