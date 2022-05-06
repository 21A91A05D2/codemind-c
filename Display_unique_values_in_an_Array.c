#include<stdio.h>
int main()
{
    int n,i,j,arr[100],c=0,l=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]!=arr[j] && i!=j)
            {
                c++;
                if(c==n-1)
                {
                printf("%d ",arr[i]);
                l++;
               
            }
            }
        }
    }
    if(l==0)
    printf("-1");
}