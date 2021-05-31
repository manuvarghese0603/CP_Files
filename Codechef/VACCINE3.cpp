#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int g,p,a[10],add=0,temp1,temp,min,max;
        cin>>g>>p;
        for(int i=0;i<10;i++)
        cin>>a[i];
        for(int i=(g-1);i<10;i++)
        add=add+a[i];
        if(add>p)
        {
            temp=add/p;
            temp1=add%p;
            if(temp1>0)
            {
                max=temp+1;
                min=temp+1;
            }
            else
            {
                min=temp1;
                max=temp;
            }
        }
        else
        {
            min=1;
            max=1;
        }
        cout<<min<<" "<<max<<endl;
    }
}