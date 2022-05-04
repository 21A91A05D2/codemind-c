#include<stdio.h>
int main()
{
    int i,d,n,a[100],t,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=0;
        t=a[i];
        while(t)
        {
            d=t%10;
            t=t/10;
            s=s*10+d;
        }
        printf("%d ",s);
    }
}
