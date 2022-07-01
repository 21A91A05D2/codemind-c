#include<stdio.h>
#include<math.h>
int main()
{
    int n,c,arr[1000],i,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    c=n-1;
    for(i=0;i<n;i++)
    {
        s+=arr[i]*pow(2,c);
        c--;
    }
    printf("%d",s);
}