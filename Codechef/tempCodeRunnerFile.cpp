#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int g,p,a[10],add=0,temp1,temp;
        cin>>g>>p;
        for(int i=0;i<10;i++)
        cin>>a[i];
        for(int i=(g-1);i<10;i++)
        add=add+a[i];
        if(add>p)
        {
            temp=add/p;
            temp1=add%p;
            if(temp==0)
            cout<<temp<<" "<<temp;
            else
            cout<<temp<<" "<<temp+temp1;
        }
        else
        cout<<"1 1";
        cout<<endl;
    }
}