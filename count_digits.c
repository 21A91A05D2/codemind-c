#include<stdio.h>
int count(int n)
{
    int d,c=0;
    if(n==0)
    {
        return 1;
    }
    while(n)
    {
        d=n%10;
        c++;
        n=n/10;
    }
    return c;
}
int main()
{
    int i,n,arr[100],a[100],k=0,res;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
       // printf("%d ",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        res=count(arr[i]);
        a[k++]=res;
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",a[i]);
    }
    
}