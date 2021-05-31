#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,c=0,temp,inti,var,var2;
        string s;
        cin>>k;
        while(k--)
        {
            cin>>s;
            inti=s[0];
            if(inti >= 97)
            {
                var=97;
                var2=109;
            }
            else 
            {
                var=78;
                var2=90;
            }
            for(int i=0;i<s.length();i++)
            {
                temp=s[i];
                if(temp<78 || temp>109 || temp<var || temp>var2)
                {
                    c++;
                    break;
                }
            }
            if(c!=0)
            break;
        }
        if(c==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}