#include<bits/stdc++.h>
using namespace std;
 int main()
{
    int n;
    cin>>n;
    int a[n],b[n]={0};
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    b[a[i]]=a[i];
    for(int i=0;i<n;i++)
    cout<<b[i]<<"  "; 
}
