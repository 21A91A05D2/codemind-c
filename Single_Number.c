#include<stdio.h>
int main()
{
    int i,arr[i],n,j,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            
            if((arr[i]==arr[j]) && i!=j)
            {
                count++;
            }
        }
        if(count==0)
        printf("%d",arr[i]);
    }
}