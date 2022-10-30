#include<stdio.h>
int main()
{
    int t=2,i,j,n,arr[500];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            t--;
        }
        if(t==0)
        {
            printf("%d",arr[i]);
            break;
        }
    }
    if(t>0)
    {
        printf("It is not possible");
    }
}