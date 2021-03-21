#include<bits/stdc++.h>
using namespace std;
/*int binaryconv(int);
int powerof2(int,int);
int numberofterms(int);*/
int main() 
{
     /*int a=15,b=5,c=10;
     if(c== a^b)
     cout<<11;
     else 
     cout<<12;
     return 0;
     int arr[12]={0};
     for(int i=0;i<12;i++)
     cout<<arr[i]<<" ";*/
     //cout<<numberofterms(64)<<"  "<<endl;
     //int d=binaryconv(64);
     int n;
     cin>>n;
     int a[n][n];
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<n;j++)
          cin>>a[i][j];
     }
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<n;j++)
          cout<<a[i][j]<<" .";
          cout<<endl;
     }
     return 0;
}
/*int binaryconv(int c)
{
     int n=numberofterms(c);
     int arr[n]={0},pow;
     for(int i=0;i<n;i++)
     {
          pow=powerof2(i,n);
          if(c>=pow)
          { 
               arr[i]=1;
               c=c-pow;
          }
     }
     cout<<endl;
     for(int i=0;i<n;i++)
     cout<<arr[i]<<" ";
     return 0;
}
int powerof2(int n,int no)
{
     int pow=1;
     n=no-n;
     for(int i=0;i<n;i++)
     pow=pow*2;
     return pow;
}
int numberofterms(int c)
{
     int n,no=12;
     for(int i=0;i<12;i++,n--)
     {
          if(c/powerof2(i,no)>0)
          { 
               n=12-i;
               break;
          }
     }
     return n;
}*/
/*
3
4
1 2 3 4
2 1 4 3
3 4 1 2
4 3 2 1
4
2 2 2 2
2 3 2 3
2 2 2 3
2 2 2 2
3
2 1 3
1 3 2
1 2 3*/