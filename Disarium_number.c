#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,r,s=0,c=0,n1,n2;
    scanf("%d",&n);
    n1=n2=n;
    c=(n==0)?1:log10(n)+1; 
    while(n1>0)
    {
        r=n1%10;
        s=s+pow(r,c);
        n1=n1/10;
        c--;
    }
    if(n2==s)
     printf("True");
    else
     printf("False");
}
