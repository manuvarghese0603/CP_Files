#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="EQUINOX";
    int t;
    cin>>t;    
    while(t--)
    {
        int n,a,b,sar=0,anu=0,temp;
        string c;
        cin>>n>>a>>b;
        while(n--)
        {
            temp=0;
            cin>>c;            
            for(int i=0;i<s.length();i++)
            {
                if(c[0]==s[i])
                {
                    temp++;
                    break;
                }
            }
            if(temp>0)
            sar=sar+a;
            else
            anu=anu+b;
        }
        if(sar>anu)
        cout<<sar<<" SARTHAK "<<anu;
        else if(sar<anu)
        cout<<anu<<" ANURADHA "<<sar;
        else
        cout<<sar<<" DRAW "<<anu;
        cout<<endl;
    }
    return 0;
}