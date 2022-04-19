#include<stdio.h>
int strlength(char *str)
{
    int i;
    for(i=0;str[i]!=NULL;i++);
    return i;
}
int main()
{
    char str[100];
    int c;
    scanf("%[^
]s",str);
    c=strlength(str);
    if(c==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}

