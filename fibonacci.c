#include<stdio.h>
int main()
{
    int n,i,a,b,c;
    scanf("%d",&n);
    a=0;
    b=1;
    c=a+b;
    printf("%d %d ",a,b);
    for(i=3;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",b);
    }
}