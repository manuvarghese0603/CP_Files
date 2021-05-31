#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() 
{
    ll int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll int l,left[26]={0},right[26]={0},temp,ui;
        l=s.length();
        if(l%2!=0)
        ui=((l/2)+1);
        else 
        ui=l/2;        
        for(int i=0;i<(l/2);i++)
        {
            temp=s[i];
            left[temp-97]++;    
        }        
        for(int i=ui;i<l;i++)
        {
            temp=s[i];
            right[temp-97]++;
        }
        for(int i=0;i<26;i++)
        {
            if(left[i]!=right[i])
            {
                temp=0;
                break;
            }
        }
        if(temp==0)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
}