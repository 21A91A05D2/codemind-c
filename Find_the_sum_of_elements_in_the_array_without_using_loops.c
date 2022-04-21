#include<stdio.h>
int main()
{
    int n,k,sum=0,s=0;
    scanf("%d",&n);
    x:
    scanf("%d",&k);
    sum=sum+k;
    s++;
    if(s==n)
    {
        printf("%d",sum);
        return 0;
    }
    goto x;
}
