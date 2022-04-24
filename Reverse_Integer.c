#include<stdio.h>
int main()
{
    signed int n,r,t,rev=0;
    scanf("%d",&n);
    t=n;
    while(n)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    printf("%d",rev);
    return 0;
}//reverse