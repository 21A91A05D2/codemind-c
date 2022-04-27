#include<stdio.h>
#include<math.h>
int main()
{
    int n,left,right,res=0,res2=0;
    scanf("%d",&n);
    left=pow(2,floor(log2(n)));
    right=left*2;
    res=n-left;
    res2=right-n;
   if(res<res2)
    printf("%d",res);
    else
    printf("%d",res2);
}