#include<stdio.h>
int main()
{
    int n,t,s,s1=0,s2=0;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(a[i]>t)
        {
            s1+=2;
        }
        else if(a[i]<=t)
        {
            s2=s2+1;
        }
    }
    s=s1+s2;
    printf("%d",s);
    return 0;
}