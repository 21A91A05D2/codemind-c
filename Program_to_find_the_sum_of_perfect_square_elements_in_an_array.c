#include<stdio.h>
int main()
{
    int n,arr[100],i,j,sum=0,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        t=arr[i];
        for(j=1;j<=arr[i];j++)
        {
            if(j*j==t)
            {
                sum=sum+arr[i];
            }
        }
    }
    printf("%d",sum);
}