#include<bits/stdc++.h>
using namespace std;
int dvalue (int);
int main()
{
    int t,c,d;
    cin>>t>>c;
    while(t--)
    {
        
        d=dvalue(c);
    }
    return 0;
}
int dvalue (int c)
{
    int d=2;
    while(d<=c)
    d=d*2;
    return d;
}