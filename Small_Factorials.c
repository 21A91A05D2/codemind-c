#include<stdio.h>
int main()
{
    int n,arr[100],i,j,pro=1,p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for(i=0;i<n;i++)
    {
        p=arr[i];
        for(j=1;j<=p;j++)
        {
            pro=pro*j;
        }
        printf("%d
",pro);
        pro=1;
    }
}