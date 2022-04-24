#include<stdio.h>
int main()
{
    int n,i;
    int a,b,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        c=a+b;
        printf("%d
",c);
    }
    return 0;
}