#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,gr=0;
    cin>>t;
    string s[t];
    char bf;
    for(int i=0;i<t;i++)
    cin>>s[i];
    for(int i=0;i<t;i++)
    {
        gr=0;
        bf='0';
        for(int j=0;j<s[i].length();j=j+1)
        {
            if(bf<s[i][j])
            {
                gr++;
                bf=s[i][j];
            }    
            if(bf>s[i][j])
            bf=s[i][j];
        } 
        cout<<gr<<endl;
    }
    
    return 0;
}