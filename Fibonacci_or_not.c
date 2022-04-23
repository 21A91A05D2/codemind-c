#include<stdio.h>
int main()
{
    int n,i,a,b,c,d=0;
    scanf("%d",&n);
    a=0;
    b=1;
    c=a+b;
    //printf("%d %d ",a,b);
    for(i=0;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(c==n)
        {
            d++;
            break;
        }
    }
    if(d==1)
    printf("True");
    else
    printf("False");
}