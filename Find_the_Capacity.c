#include<stdio.h>
int main()
{
    int s,t,b,cb,ck;
    scanf("%d %d %d",&s,&t,&b);
    cb=2*s*t*b*512;
    ck=cb/1024;
    printf("%dKB",ck);
}