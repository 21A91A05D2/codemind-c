#include<stdio.h>
int main()
{
    int m,n,i,j,s=0,o=0,a[100][100];
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(i%2!=0)
            s=s+a[i][j];
            else
            o=o+a[i][j];
        }
    }
    printf("%d %d",o,s);
}