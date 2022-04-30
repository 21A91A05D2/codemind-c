#include<stdio.h>
int main()
{
    int n,i,rev=0,d,k;
    scanf("%d",&n);
    k=n;
    while(n>0)
    {
        d=n%10;
        n=n/10;
        rev=rev*10+d;
    }
    if(rev==k)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}