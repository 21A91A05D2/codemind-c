#include<stdio.h>
int main()
{
    int n,i,arr[1000],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            break;
        }
        sum+=arr[i];
    }
    printf("%d",sum);
}