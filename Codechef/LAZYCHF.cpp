#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll int t;
    cin>>t;
    while(t--)
    {
        ll int x,m,d,t1,t2;
        cin>>x>>m>>d;
        t1=x*m;
        t2=x+d;
        cout<<min(t1,t2)<<endl;

    }
}