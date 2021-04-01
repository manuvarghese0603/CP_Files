#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t,n=10000000,num,i,j;
    vector<int> ans(n+1,0);
    ans[1]=1;
    //cout<<ans[10000000]<<" ";
    for(i=2;i<=n;i++)
    {
        if(ans[i]==0)
        {
            ans[i]=i;
            for(j=i*i;j<=n;j=j+i)
            {
                if(ans[j]==0)
                ans[j]=i;
            }
        }
    }
    cin>>t;
    while(t--)
    {
        cin>>num;
        cout<<num/ans[num]<<endl;
    }
    return 0;
}