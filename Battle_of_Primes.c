#include<stdio.h>
int prime(int x)
{
    int f=0,i;
    for(i=2;i<(x/2)+1;i++)
    {
        if(x%i==0)
        {
            f++;
            return 0;
        }
    }
    if(f==0)
    {
        return 1;
    }
}
int main()
{
    int n1,n2,n,i,x;
    scanf("%d %d",&n1,&n2);
    n=n1+n2;
    i=1;
    while(1)
    {
        x=n+i;
        if(prime(x))
        {
            printf("%d",i);
            break;
        }
        i+=1;
    }
}