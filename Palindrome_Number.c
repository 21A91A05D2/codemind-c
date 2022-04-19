#include<stdio.h>
int reverse(int num)
{
    int rem,rn=0;
    while(num!=0)
    {
        rem=num%10;
        num=num/10;
        rn=rn*10+rem;
    }
    return rn;
}
int main()
{
    int n,arr[100],i,rn;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        rn=reverse(arr[i]);
        if(rn==arr[i])
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}
