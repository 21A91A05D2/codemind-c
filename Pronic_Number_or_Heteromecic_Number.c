#include<stdio.h>
int main()
{
    int n,h=0,i=1;
    scanf("%d",&n);
    while(i<n)
    {
        if((i*(i+1))==n)
        {
            h=1;
        }
        i++;
    }
    if(h==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}