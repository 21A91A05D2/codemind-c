#include<stdio.h>
int main()
{
    int n,i,arr[i],res;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        res=i;
    }
    printf("%d",res);
    
}