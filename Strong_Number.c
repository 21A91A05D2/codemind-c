#include<stdio.h>
int fact(int r)
{
    int a=1,i;
    for(i=1;i<=r;i++)
    {
        a*=i;
    }
    return a;
}
int main()
{
    int n,i,sum=0;
    int x=0,r,f=0;
    scanf("%d",&n);
    x=n;
    while(x!=0)
    {
        r=x%10;
        f=fact(r);x=x/10;
        sum+=f;
    }
    if(sum==n)
    {
        printf("The number %d is a strong number",n);
    }
    else
    {
        printf("The number %d is not a strong number",n);
    }
}