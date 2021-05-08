#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,a,b,ans;
        cin>>x>>a>>b;
        ans=(a+(100-x)*b)*10;
        cout<<ans<<endl;
    }
}