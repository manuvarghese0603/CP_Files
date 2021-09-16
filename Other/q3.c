#include<stdio.h>
#include<conio.h>
int main()
{
    int c,flag;
    for(int i=1;i<=5;i++)
    {
        c=i;
        flag = 0;
        for(int j=1;j<=5;j++)
        {
            if(c==1 || flag ==1)
            {
                printf("%d ",c);
                c++;
                flag = 1;
            }
            else
            {
                printf("%d ",c);
                c--;
            }
            
        }
        printf("\n");
    }
}