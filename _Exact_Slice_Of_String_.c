#include<stdio.h>
int main()
{
    int a,b,i;
    char str[100];
    scanf("%[^
]s",str);
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {

        printf("%c",str[i]);
    }

}
