#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,c=0,l=0;
    char str[100];
    scanf("%[^
]s",str);
    while(str[i]!=NULL)
    {
        if(islower(str[i]))
        l++;
        i++;
    }

    printf("%d",l);
}