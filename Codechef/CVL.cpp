#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,temp,ts=0,ta=0,rt;
    //long long int t;
    vector<int> vec1;
    cin>>n>>t;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        ts=ts+temp;
        vec1.push_back(temp);
    }
    if(ts<=t)
    {
        rt=t%ts;
        ta=ta+(t/ts)*n;
        t=rt;
    }
    for(int i=0;i<n;i++)
    {
        if(t==0)
        break;
        
        if(vec1[i]<=t)
        {
            ta++;
            t=t-vec1[i];
        }
    }
    cout<<ta;
    return 0;
}