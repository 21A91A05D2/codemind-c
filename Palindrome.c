#include<stdio.h>
int main()
{
    int n,r,t,a=0;
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        r=n%10;
        a=(a*10)+r;
        n=n/10;
    }
    if(a==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}