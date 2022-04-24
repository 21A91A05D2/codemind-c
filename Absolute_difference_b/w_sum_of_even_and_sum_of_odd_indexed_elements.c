#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[200],i,e=0,o=0,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            e+=arr[i];
        }
        else
        {
            o+=arr[i];
        }
    }
    d=abs(e-o);
    printf("%d",d);
}