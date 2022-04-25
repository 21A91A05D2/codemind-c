#include<stdio.h>
int main()
{
    int arr[100],n,k,i,j,temp=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        c=0;
       for(j=0;j<n;j++)
       {
           if(arr[i]==arr[j])
       {
           c++;
       }
       }
       if(c==k)
       {
           temp=1;
           printf("%d ",arr[i]);
           arr[i]=-1;
       }
    }
    if(temp==0)
    {
        printf("-1");
    }
    return 0;
}