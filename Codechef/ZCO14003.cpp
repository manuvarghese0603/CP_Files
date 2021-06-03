#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
{
    vector<ll int> v;
    ll int a,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());    
    for(int i=0;i<n;i++)
    v[i]=v[i]*(n-i);       
    cout<<*max_element(v.begin(),v.end());
}
