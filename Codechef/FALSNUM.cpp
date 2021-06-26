#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    string s;
    //int tem= 48;
    char c = '0';
    cin>>s;
    if(s[0] > '1')
    cout<<"1"<<s<<"\n";
    else
    {
        s.insert(1, 1, c);
        cout<<s<<"\n";
    }
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