#include<stdio.h>
int main()
{
    int a,n=0,lar=0;
    scanf("%d",&a);
    while(a>0)
    {
        n=a%10;
        if(lar<n)
        {
            lar=n;
        }
        a=a/10;
        
    }
    printf("%d",lar);
}