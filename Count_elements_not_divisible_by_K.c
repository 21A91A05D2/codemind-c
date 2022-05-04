#include<stdio.h>
int main()
{
    int n,i,a[100],s=0,m;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(a[i]%m!=0)
            s++;
    }
    printf("%d",s);
}