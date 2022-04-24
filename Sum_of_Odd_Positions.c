#include<stdio.h>
int main()
{
    int n,arr[100],i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]); 
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
}