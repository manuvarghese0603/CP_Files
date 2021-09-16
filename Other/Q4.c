#include<stdio.h>
#include<conio.h>
int main()
{
    int x,ans=1,n,tmp;
    printf("Enter x and n");
    scanf("%d%d",&x,&n);
    tmp=x;
    for(int i=2;i<=n;i++)
    {
        ans = ans + i*tmp;
        tmp = tmp*x;
    }
    printf("Answer = %d",ans);
}