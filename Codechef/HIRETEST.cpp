#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x,y,f,p;
        cin>>n>>m>>x>>y;
        while(n--)
        {
            f=0;
            p=0;
            string s;
            cin>>s;
            for(int i=0;i<m;i++)
            {
                if(s[i]=='P')
                p++;
                else if(s[i]=='F')
                f++;
            }
            if(f>=x || (f==(x-1) && p>=y) )
            cout<<"1";
            else
            cout<<"0";            
        }
        cout<<endl;
    }
}
