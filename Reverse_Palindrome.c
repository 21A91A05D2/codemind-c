#include<stdio.h>
int fun(int n)
{
    int d,rev=0;
    while(n)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    return rev;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int p=fun(n);
    n+=p;
    while(true)
    {
        int p=fun(n);
        if(p==n)
        {
            printf("%d",n);
            break;
        }
        n+=p;
    }
}