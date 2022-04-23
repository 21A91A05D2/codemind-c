#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,n1,n2,i,sum=0;
    scanf("%d",&n);
    i=(n==0)?1:log10(n)+1;
    n1=n2=n;
    while(n1>0)
    {
        r=n1%10;
        sum=sum+pow(r,i);
        n1=n1/10;
        i--;
    }
    if(sum==n2)
    printf("True");
    else
    printf("False");
}