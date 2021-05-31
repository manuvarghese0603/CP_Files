#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t,c=1;
    vector<int> v;
    cin>>t;
    for(int i=1;i<=t/2;i++)
    {
        if(t%i==0)
        {
            c++;
            v.push_back(i);
        }
    }
    cout<<c<<endl;
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<t;
	return 0;
}
