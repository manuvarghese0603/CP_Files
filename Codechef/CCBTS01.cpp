#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p=0,c=0,m=0;
        string s;
        cin>>s;        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='P')
            p++;
            if(s[i]=='C')
            c++;
            if(s[i]=='M')
            m++;
        }
        if(p==1 && c==1 && m==1)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
        //cout<<p<<" "<<c<<" "<<m<<endl;
    }
    return 0;
}