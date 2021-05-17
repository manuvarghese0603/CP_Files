#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x=0,o=0,u=0;
        char c;
        for(int i=0;i<9;i++)
        {          
            cin>>c;
            if(c=='X')
            x++;
            else if (c=='O')
            o++;
            else
            u++;            
        }
        if(u%2==0)
        {
            o=(o+(u/2));
            x=(x+(u/2));
        }
        else
        {
            o=(o+(u/2));
            x=(x+(u/2)+1);
        }
        if(x>5 || o>4)
        cout<<"3";
        else
        {
            if(o>0)
            cout<<"1";
            else 
            cout<<"2";
        }
        cout<<"\n";      
    }
}