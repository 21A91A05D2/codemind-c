#include<stdio.h>
#include<string.h>
int main()
{
    int n,c,i;
    char s[100];
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        c++;
    }
    printf("%d",c);
}