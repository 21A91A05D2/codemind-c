#include <stdio.h>
int fun(int *array,int m)
{
   int i,b=0,c=0;
    b = array[0];
    for (i = 1; i < m - 1; i++)
        b = b ^ array[i];
    for (i = 2, c = 1; i <= m; i++)
        c = c ^ i; 
    c = c ^ b;  
    return c;
}
int main()
{
    int n, i, j,g, c, t, b,m,res;
    scanf("%d", &n);
    int array[100];
    for(g=0;g<n;g++)
    {
        scanf("%d",&m);
        for(i=0;i<m-1;i++)
        {
            scanf("%d",&array[i]);
        }
        res=fun(array,m);
        printf("%d
",res);
    }
}