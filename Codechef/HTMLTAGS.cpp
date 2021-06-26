#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    string s;
    cin>>s;
    int ans=1,len,t;
    len = s.length();
    int t0 = s[0],t1 = s[1],tn = s[len-1];
    if((t0!=60) || (t1 != 47) || (tn != 62) || (len < 4))
    ans = 0;
    else
    {
        for(int i=2;i<(len-1);i++)
        {
            t = s[i];
            if(t < 48 || t > 122 || (t > 57 && t < 97 ))
            {
                ans = 0;
                break;
            }
        }
    }
    if(ans==0)
    cout<<"Error\n";
    else
    cout<<"Success\n";

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