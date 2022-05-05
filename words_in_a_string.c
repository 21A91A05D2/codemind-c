#include<stdio.h>
#include<string.h>
int main()
{
    int n,c=1,i;
    char s[100];
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==' ')
        c++;
    }
    printf("%d",c);
}