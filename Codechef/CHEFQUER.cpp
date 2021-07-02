#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll int n,q,l,r,x,qn,temp;
    cin>>n>>q;
    vector<ll int> v(n);
    for(ll int i=0;i<n;i++)
    cin>>v[i];
    while(q--)
    {
        temp=0;
        cin>>qn;
        if(qn==1)
        {
            cin>>l>>r>>x;
            for(ll int i=(l-1);i<r;i++,temp++)
            v[i]=v[i]+(x+temp)*(x+temp);
        }
        else
        {
            cin>>x;
            cout<<v[x-1]<<"\n";
        }
    }
}
int main()
{    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}