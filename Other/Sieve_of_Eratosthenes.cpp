#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,fact=1;
    cin>>n;
    int arr[(n/2)+1];
    for(int i=0;i<=n/2;i++)
    arr[i]=i;
    cout<<sizeof(arr)/sizeof(arr[0])<<endl;
    for(int i=2;i<=n/2;i++)
    {
        if(arr[i]!=-1 && n%arr[i]>0)
        {
            for(int j=arr[i]*arr[i];j<=n/2;j=j+arr[i])
            arr[j]=-1;
        }        
    }
    for(int i=n/2;i>=sqrt(n);i--)
    {

        if(arr[i]!=-1 && n%arr[i]==0 )
        {
            fact=arr[i];
            break;
        }
    }
    //cout<<arr.size()<<endl;
    cout<<"\nFactor is "<<fact;
}