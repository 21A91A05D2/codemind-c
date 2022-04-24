#include<stdio.h>
#include<string.h>
int main()
{
    char str[10000];
    int z=0,o=0,i,l;
    scanf("%s",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        
        if(str[i]==122)
        {
            z++;
        }
        else if(str[i]==111)
        {
            o++;
        }
    }
    if(2*z==o)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}