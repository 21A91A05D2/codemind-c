#include<stdio.h>
int main()
{
    int n,arr[100],i,avg=0,sum=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]<=avg)
        c++;
    }
    printf("%d",c);
}