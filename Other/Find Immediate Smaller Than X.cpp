#include<bits/stdc++.h>
using namespace std;
int immediateSmaller(int arr[], int n, int x)
{
    int c=0,im=arr[0];
    for(int i=1;i<n;i++)
    {
        if((x-arr[i])>0)
        {
            arr[i]<im;
            im=arr[i];
            c++;
        }
    }
    if(c>0)
    return im;
    else 
    return -1;
}

int main() 
{
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    
            int n;
        	cin >> n;
        	
        	int arr[n];
        	
        	for(int i = 0;i<n;i++){
        	    cin >> arr[i];
        	}
        	
        	int x;
        	cin >> x;
        	
        	cout << immediateSmaller(arr, n, x) << endl;
	}
	
	
	return 0;
}