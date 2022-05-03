#include<stdio.h>
int main()
{
    int n,i,j,c=0,co=0;
    scanf("%d",&n);//8
    for(i=1;i<=n;i++)//2<=8
    {
        if(n%i==0)//8%2==0
        {
            for(j=1;j<=i;j++)//j=2<=2
            {
                if(i%j==0)//2%2==0
                {
                    c++;//c=2
                }
            }
            if(c!=2)
            {
                co++;//co=1
            }
            c=0;
        }
    }
    printf("%d",co);
}