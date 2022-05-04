#include<stdio.h>
int main()
{
    int n,arr[100],j,i,p,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    p=n-1;
    for(i=0;i<n;i++)
    {
        k=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                arr[j]=-1;
            }
        }
    }
         for(i=0;i<n;i++)
     {
         if(arr[i]!=-1)
         {
            printf("%d ",arr[i]);
         }
     }
    
}