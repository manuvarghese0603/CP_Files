#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n,pl1=0,pl2=0,m=0,w,tmp;
    cin>>n;
    vector<int> p1(n);
    vector<int> p2(n);
    for(int i=0;i<n;i++)
    {
        cin>>tmp>>w;
        pl1+=tmp;
        pl2+=w;
        p1[i]=pl1;
        p2[i]=pl2;
    }
    w=0;
    for(int i=0;i<n;i++)
    {
        if(m<abs(p1[i]-p2[i]))
        {
            m=abs(p1[i]-p2[i]);
            if(p1[i]>p2[i])
            w=1;
            else
            w=2;
        }
    }
    cout<<"Ans: "<<w<<" "<<m<<"\n";
}
int main()
{    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t;
    solve();
    return 0;
}