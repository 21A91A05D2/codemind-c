#include<stdio.h>
int main()
{
    int n;
    char str[100],i,j;
    scanf("%d",&n);
    for(i=65;i<65+n;i++)
    {
        for(j=65;j<65+n;j++)
        {
            printf("%c ",i);
        }
        printf("
");
    }
}