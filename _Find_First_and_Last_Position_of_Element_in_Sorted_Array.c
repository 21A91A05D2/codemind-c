#include<stdio.h>
int main()
{
    int n,arr[100],i,ser,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&ser);
    for(i=0;i<n;i++)
    {
        if(arr[i]==ser)
        {
            printf("%d ",i);
            c=1;
            break;
        }
    }
      if(c==0)
    {
        printf("-1 ");
        
    }
    c=0;
    for(i=n-1;i>=0;i--)
    {
        if(arr[i]==ser)
        {
            printf("%d ",i);
            c=1;
            break;
        }
    }
      if(c==0)
    {
        printf("-1 ");
        
    }
}