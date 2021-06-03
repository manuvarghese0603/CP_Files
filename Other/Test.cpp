#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int a[]={3,7,17,32,25};
	int t;
	for(int i=0;i<5;i++)
	{
		t=3;
		for(int j=i;j<5;j++)
		{
			t=t^a[j];
			cout<<t<<" ";
		}
		cout<<endl;
	}
}