#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=n;j>0;j--)
        {
            if(i==j||j==n-i+1)
            printf("x");
            else
            printf("0");
        }
        printf("
");
    }
}