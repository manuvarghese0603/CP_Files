#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[4];
    printf("Enter binary value ");
    for(int i=0;i<4;i++)
    scanf("%d",&arr[i]);
    int tmp=1,ans=0;
    for(int i=(n-1);i>=0;i--)
    {
        ans=ans+tmp;
        tmp=tmp*2;
    }
    printf("Decimal value: %d",ans);
}