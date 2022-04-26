#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,res;
    scanf("%d%d%d",&x,&y,&m);
    res=pow(x,y);
    printf("%d",res%m);
}