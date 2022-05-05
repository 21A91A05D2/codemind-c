#include<stdio.h>
int main()
{
    int i,n,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j||j==1||i==n)
            printf("*");
            else
            printf(" ");
        }
        printf("
");
    }
    
}