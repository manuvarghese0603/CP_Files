#include<bits/stdc++.h>
using namespace std;
int rec(int);
int main()
{
	long long int t,n;
	cin>>t;
	while(t--)
	{
		int out;
		cin>>n;
		out=rec(n);
		cout<<out<<endl;
	}
}
int rec(int n)
{
	int a;
	if(n==0)
	return 1;
	else if (n==1)
	return 3;
	else 
	{
		a=3*rec(n-1)+2*rec(n-2);
		return a;
	}
	
}
