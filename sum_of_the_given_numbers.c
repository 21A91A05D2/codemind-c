#include<stdio.h>
int main()
{
    int n,a,b,s;
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%d %d",&a,&b);
        s=a+b;
        printf("%d
",s);
        n--;
    }
    return 0;
}