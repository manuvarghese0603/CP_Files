#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll int n, d;
        cin>>n;
        d= (1+8*n);
        d= sqrt(d);
        cout<<(-1+d)/2<<endl;
    }
}