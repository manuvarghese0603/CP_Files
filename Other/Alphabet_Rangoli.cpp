#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	char c = 'a';
	for(int i=0;i<t;i++)
	{
        c = c+(t-1);
		for(int j=(t-1);j<i;j--)
		cout<<"--";
		for(int j=(t-1);j<=(t-i);j--,c--)
		cout<<c<<"-";
		cout<<endl;
	}

}