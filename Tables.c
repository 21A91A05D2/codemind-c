#include<stdio.h>
int main()
{
    int n,a,i,p;
    scanf("%d%d",&n,&a);
    for(i=1;i<=a;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        p=n*i;
        printf("%d x %d = %d
",n,i,p);
    }
    return 0;
}