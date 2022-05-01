#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,sum=0,res;
    scanf("%d",&n);
    res=log10(n)+1;
    while(res>1)
    {
        sum=0;
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    res=log10(sum)+1;
    n=sum;
    }
    printf("%d",sum);
}