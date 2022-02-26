#include<stdio.h>
main()
{
    int a[3],b[3],c[2],i,d=0,e=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            d++;
        }
        if(a[i]<b[i])
        {
            e++;
        }
        if(a[i]==b[i])
        {
            printf("");
        }
    }
    printf("%d %d",d,e);
    
    
}
