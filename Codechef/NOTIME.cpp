#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,x,hr,c=0;
    cin>>n>>h>>x;
    int t[n];
    for(int i=0;i<n;i++)
    cin>>t[i];
    hr=h-x;
    for(int i=0;i<n;i++)
    {
        if(t[i]==hr)
        {
            c++;
            break;
        }
    }
    if(c>0)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}