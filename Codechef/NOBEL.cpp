#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,total=0,a;
        cin>>n>>m;
        //int a[n];
        for(int i=0;i<n;i++)
        { 
            cin>>a;
            total=total+a;
        }
        n=n*(n+1)/2;
        cout<<"n = "<<n<<endl;
        cout<<"total = "<<total<<endl;
        if(n!=total)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}