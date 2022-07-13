#include<stdio.h>
int main()
{
    int m,n,a[100][100],i,j,s=0,c=0;
    scanf("%d%d",&m,&n);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || j==n ||j==1 ||i==m)
            {
                s=s+a[i][j];
            }
            
        }
    }
    printf("%d",s);
}