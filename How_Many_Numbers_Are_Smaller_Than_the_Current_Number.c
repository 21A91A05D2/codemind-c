#include<stdio.h>
int main()
{
    int arr[20],i,j,n,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)//outer loop
    {
        count=0;
      for(j=0;j<n;j++)//inner loop
      {
          if(arr[j]<arr[i])
          count++;
      }
      printf("%d ",count);
    }
    return 0;
}