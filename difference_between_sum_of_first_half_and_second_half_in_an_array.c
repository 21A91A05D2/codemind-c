#include<stdio.h>
#include<math.h>
int main()
{
    int n,h,arr[100],i,d,sum,sum2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    h=n/2;
    for(i=0;i<h;i++)
    {
        sum=sum+arr[i];
    }
    for(i=h;i<n;i++)
    {
        sum2=sum2+arr[i];
    }
    d=abs(sum-sum2);
    printf("%d",d);
}