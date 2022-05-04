#include<stdio.h>
int main()
{
    int n,arr[100],i,a,k=0,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=a&&arr[i]<=b)
       // sum+=arr[i];
       printf("%d ",arr[i]);
       else
       k++;
    }
    if(k==n)
    printf("-1");
   // printf("%d",sum);
}