#include<stdio.h>
int main()
{
    int l,b,w,c,a,t;
    scanf("%d%d%d%d",&l,&b,&w,&c);
        a=(l+w+w)*(b+w+w)-(l*b);
        t=a*c;
        printf("%d",t);
    
    return 0;
}