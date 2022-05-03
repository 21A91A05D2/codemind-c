#include<stdio.h>
#include<math.h>
int main()
{
    long long int on,bn=0,dn=0,d,r,i=0,j=0;
    scanf("%lld",&on);
    while(on>0)  //octal to decimal
    {
        d=on%10;
        dn+=d*pow(8,i);
        on=on/10;
        i++;
    }
    while(dn>0) //deci to binary
    {
        d=dn%2;
        bn+=d*pow(10,j);
        dn=dn/2;
        j++;
    }
    printf("%lld",bn);
}