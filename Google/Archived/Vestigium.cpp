#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k=0,r=0,c=0,sum,ts;
        cin>>n;
        int arr[n][n];
        for(int i=0;i<n;i++)            //taking input
        {
            for(int j=0;j<n;j++)
            cin>>arr[i][j];
        }
        for(int i=0;i<n;i++)            //Trace or finding the sum of diagonal
        {
            k=k+arr[i][i];
        }
        sum=n*(n+1)/2;

        for(int i=0;i<n;i++)            //Repetition in Row
        {
            ts=0;
            for(int j=0;i<n;j++)
            ts=ts+arr[i][j];
            if(ts!=sum)
            r++;            
        }
        for(int i=0;i<n;i++)            //Repetition in Column
        {
            ts=0;
            for(int j=0;i<n;j++)
            ts=ts+arr[j][i];
            if(ts!=sum)
            c++;            
        }
        cout<<"Case #"<<t<<": "<<k<<" "<<r<<" "<<c<<endl;

    }
}