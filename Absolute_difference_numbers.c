#include<stdio.h>
int main()
{
    int n,rev,zero=1;
    long long number,last=0,r=0,first=0;
    scanf("%lld%d",&number,&n);
    rev=n;
    while(rev)
    {
        zero=zero*10;
        rev--;
    }
    last=number%zero;
    while(number)
    {
        r=(r*10)+(number%10);
        number/=10;
    }
    while(n)
    {
        first=(first*10)+(r%10);
        r/=10;
        n--;
    }
    if(first<last)
    printf("%lld",last-first);
    else
    printf("%lld",first-last);
}