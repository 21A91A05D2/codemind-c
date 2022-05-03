#include<stdio.h>
#include<math.h>
int main()
{
    double p,r,t,n;
    double a,b,c;
    scanf("%lf%lf%lf",&p,&r,&t);
    a=(1+r/100);
    b=pow(a,t);
    c=p*b;
    printf("%.2lf",c);
    
}