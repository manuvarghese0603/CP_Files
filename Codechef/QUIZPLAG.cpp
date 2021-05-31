#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k,temp,temp2;
        vector<int> v;
        cin>>n>>m>>k;
        int a[k];
        for(int i=0;i<k;i++)
        cin>>a[i];        
        sort(a,a+k);
        for(int i=0;i<k;i++)
        cout<<a[i]<<" ";
        cout<<endl;   
        int index=0;
        for(int i=index;i<k;i++)
        {            
            for(int j=(i+1);j<k;j++)
            {
                if((a[i]!=a[j]) && (j>(i+1)))
                {
                    index=j;
                    v.push_back(a[i]);
                    break;
                }
            }
        }        
        for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";

    }
}