#include<stdio.h>
int main()
{
    int n,p,q,a[100],i,sum=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&p,&q);
    for(i=0;i<n;i++)
    {
        if(a[i]>=p  && a[i]<=q)
        {
            c++;
            printf("%d ",a[i]);
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}