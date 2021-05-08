#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=3;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    if(a[1]==a[0] || a[1]==a[2])
    cout<<"YES";
    else
    cout<<"NO";
}