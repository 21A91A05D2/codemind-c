#include<stdio.h>
int main()
{
    int arr[100],i,n,sum;
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    //scanf("%d",&ser);
   avg=(float)sum/n;
   
    printf("%.2f",avg);
}