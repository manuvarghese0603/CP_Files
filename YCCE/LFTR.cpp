#include<bits/stdc++.h>
using namespace std;
int  sieve (int);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    //cout<<sq<<endl;
    while(t--)
    {
        long long int n;
        cin>>n;
        cout<<sieve(n)<<endl;
    }
}
int sieve(int n)
{
    long long int fact=1,arr[n/2+1],i,j;
    for(i=0;i<=n/2;i++)             //array initialisation 
    arr[i]=i;
    fact=1;
    for(i=2;i<=n/2;i++)             //seive algo starts
    {
        if(arr[i]!=-1 && n%arr[i]>0)
        {
            for(j=arr[i]*arr[i];j<=n/2;j=j+arr[i])  //crossing out multiples
            arr[j]=-1;
        }
        else if(arr[i]!=-1) 
                fact = arr[i];        
    }
    /*for(int i=n/2;i>=sqrt(n);i--)
        {

            if(arr[i]!=-1 && n%arr[i]==0 )
            {
                fact=arr[i];
                break;
            }
        }*/
    return fact;
}