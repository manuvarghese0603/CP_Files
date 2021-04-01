#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,q,sf,sl;
        cin>>n>>q;
        long long int arr[n+1];
        arr[0]=0;
        for(int i=1;i<=n;i++)
        cin>>arr[i];
        for(int i=1;i<=n;i++)
        arr[i]+=arr[i-1];
        while(q--)
        {
            cin>>sf>>sl;
            sf--;
            cout<<arr[sl]-arr[sf]<<endl;
        }
    }
    return 0;
}