#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int g;
        cin>>g;
        while(g--)
        {
            int n,I,q;
            cin>>I>>n>>q;
            if(n%2!=0)
            {
                if(I==q)
                cout<<n/2<<endl;
                else 
                cout<<((n/2)+1)<<endl;
            }
            else
            {
                cout<<n/2;
            }
        }
    }
    return 0;
}