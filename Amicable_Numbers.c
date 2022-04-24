#include<stdio.h>
int main()
{
    int a,b,i,j,sum1=0,sum2=0;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            sum1+=i;
        }
    }
    for(j=1;j<b;j++)
    {
        if(b%j==0)
        {
            sum2+=j;
        }
    }
    if(sum1==b && sum2==a)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}