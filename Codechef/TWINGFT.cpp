#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll int t;
    cin>>t;
    while(t--)
    {
        ll int n,k,s1=0,s2=0,a,index;
        cin>>n>>k;
        vector<ll int> v;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        a=k;
        sort(v.begin(),v.end());
        for(int i=(n-1);i>=1,a>0;i=i-2,a--)
        {
            s1=s1+v[i];        
            s2=s2+v[i-1];            
            index=i;
        }       
        s2=s2+v[index-2];        
        cout<<max(s1,s2)<<endl;
    }
}