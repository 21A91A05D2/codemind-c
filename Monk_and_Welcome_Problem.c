#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,arr[10000],brr[10000],j,k=0,temp=0,sq;
    int crr[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&brr[i]);
    }
    for(i=0,j=0;i<n;i++,j++)
    {
        {
            sq=arr[i]+brr[j];
            crr[k]=sq;
        }
        k++;
    }
    for(k=0;k<n;k++)
    {
        printf("%d ",crr[k]);
    }
    
}