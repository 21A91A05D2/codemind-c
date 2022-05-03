#include<stdio.h>
int main()
{
    int n,t,d,i,c=0,s=0,k=0;
    scanf("%d",&n);
    t=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==1)
    {
        while(n)
        {
            d=n%10;
            n=n/10;
            s=s*10+d;
        }
    }
    for(i=1;i<s;i++)
    {
        if(s%i==0)
        {
            k++;
        }
    }
    if(k==1 && c==1)
    {
        printf("circular prime");
    }
    else if (k!=1 && c==1)
    {
        printf("prime but not a circular prime");
    }
    else if(c!=1)
    {
        printf("not prime");
    }
}