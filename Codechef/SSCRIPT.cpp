#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        string s;
        int a[n],temp;
        cin>>s;
        for(int i=0;i<n;i++)
        a[i]=s[i];
        temp=k;
        for(int i=0;i<n;i++)
        {
            if(a[i]==42)
            {
                temp--;
                if(temp==0)
                break;
            }
            else
            temp=k;
        }
        if(temp==0)
        cout<<"YES";
        else
        cout<<"NO";
        cout<<"\n";
    }
    return 0;
}