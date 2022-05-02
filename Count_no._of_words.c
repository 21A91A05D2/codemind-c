#include<stdio.h>
int main()
{
    int i,n=1;
    char str[100];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        n++;
    }
    printf("%d",n);
}