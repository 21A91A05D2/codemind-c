#include<stdio.h>
int main()
{
    int n,m,i,d,t,s=0;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        int c=0,s=0;
        t=i;
        while(t)
        {
            d=t%10;
            t=t/10;
            s++;
            if(d==0)
            {
                break;
            }
            else
            {
                if(i%d==0)
                {
                    c++;
                }
            }
        }
    
        if(s==c)
        {
            printf("%d ",i);
        }
    }
}