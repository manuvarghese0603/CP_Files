#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        char status[n][7];
        for(int i=0;i<n;i++)
        cin>>status[i];        
        for(int i=0;i<n;i++)
        {
            if(status[i]=="start") 
            c++;
            if(status[i]=="start" && status[i+1]!="restart" )
            c++;
            if(status[i]=="stop")
            c--;
        }
        cout<<c<<"  ";
        if(c>=0)
        cout<<"200";
        else 
        cout<<"404";
        cout<<endl;
    }
    return 0;
} 
// This code dosen't work.
