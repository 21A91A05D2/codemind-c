#include<stdio.h>
int main()
{
    int arr[100],i,n,c=0,sum,ser;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        //sum=sum+arr[i];
    }
    scanf("%d",&ser);
   // avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(ser==arr[i])
        c++;
        
    }
    if(c>0)
    printf("True");
    else
    printf("False");
}