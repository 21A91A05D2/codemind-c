#include<stdio.h>
int main()
{
    int n,r,sum=0,n1=0,i,n3=0;
    scanf("%d",&n);
    n3=n;
    n1=n/2;
    for(i=1;i<=n1;i++)
    {
        if(n%i==0)
        {
           // n2=n/i;
            sum=sum+i;
        }
    }
    if(sum>=n3)
    printf("True");
    else
    printf("False");
}