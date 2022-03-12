#include<stdio.h>
int sqroot(int num)
{
    int i,k;
    for(i=1;i<=num;i++)
    {
        if(i*i==num)
        {
            k=1;
            break;
        }
        else
        {
            k=0;
        }
    }
    return k;
}
int main()
{
    int n,i,j,m,arr[100],k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        k=sqroot(arr[i]);
        if(k==1)
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