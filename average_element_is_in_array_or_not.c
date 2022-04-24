#include<stdio.h>
int main()
{
    int arr[100],i,n,c=0,sum,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(avg==arr[i])
        c++;
        
    }
    if(c>0)
    printf("True");
    else
    printf("False");
}