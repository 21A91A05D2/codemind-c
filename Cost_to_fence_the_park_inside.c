#include<stdio.h>
int main()
{
    int l,b,w,c,a,t;
    scanf("%d %d %d %d",&l,&b,&w,&c);
    if(l<=w+w||b<=w+w)
    {
        printf("Impossible");
    }
else
    {
        a=(l*b)-(l-2*w)*(b-2*w);
        t=a*c;
        printf("%d",t);
    }
    return 0;
}