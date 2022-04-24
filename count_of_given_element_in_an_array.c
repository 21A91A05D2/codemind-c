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
        if(ser==arr[i])
        c++;
    }
    printf("%d",c);
}