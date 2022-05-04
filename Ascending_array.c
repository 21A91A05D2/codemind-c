#include<stdio.h>
int main()
{
    int n,i,a[100],s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            s++;
        }
    }
    if(s==(n-1))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}