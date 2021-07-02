#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    string s;
    cin>>s;
    int x=0,a=0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == '<')
        x++;
        else
        {
            x--;
            if(x<0)
            {
                break;
            }
        }
        if(x==0)
        a=i+1;
    }
    cout<<a<<"\n";
}
int main()
{    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}