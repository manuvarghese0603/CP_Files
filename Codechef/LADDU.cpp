#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int den,act,total=0,a;
    string nationality;
    cin>>act>>nationality;
    if(nationality == "INDIAN")
    den=200;
    else 
    den=400;
    string s;   
    for(int i=0;i<act;i++)
    {
        cin>>s;
        if(s=="TOP_CONTRIBUTOR")
        total+=300;
        else if(s=="CONTEST_HOSTED")
        total+=50;
        else if(s=="BUG_FOUND")
        {
            cin>>a;
            total+=a;
        }
        else 
        {
            cin>>a;
            if(a<20)
            total+=300+20-a;
            else
            total+=300;
        }
    } 
    cout<<(total/den)<<"\n";   
}
int main()
{    
    ll int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}