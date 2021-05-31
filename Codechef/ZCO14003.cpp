#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void vecsort(vector<ll int> &v) //Improve sorting algo
{
    ll int temp;
    for(int i=(v.size()-1);i>=0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(v[j]>v[j+1])
            {
                temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
            }
        }        
    }
}
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
    vecsort(v);    
    for(int i=0;i<n;i++)
    v[i]=v[i]*(n-i);       
    cout<<*max_element(v.begin(),v.end());
}
