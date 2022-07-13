#include<stdio.h>
int main()
{
    int m,n,i,j,s=0,a[100][100];
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            s=s+a[i][j];
        }
    }
    printf("%d",s);
}