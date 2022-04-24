#include<stdio.h>
int main()
{
    int n,i,j,s=0,d=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=0;
       for(j=1;j<=i;j++)
       {
           if(i%j==0)
           {
               s++;
           }
       }
       if(s==9)
       {
           printf("%d ",i);
           d++;
       }
    }
    printf("
Total=%d",d);
    return 0;
}//2 lo 4