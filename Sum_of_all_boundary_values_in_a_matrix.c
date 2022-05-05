#include<stdio.h>
int main()
{
    int arr[100][100],i,j,n,m,sum=0;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        scanf("%d",&arr[i][j]);
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(j==1||j==m||i==1||i==n)
            {
               sum=sum+arr[i][j];
            }
        }
    }
    printf("%d",sum);
}