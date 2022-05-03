#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int v=0,c=0,i,d=0,s=0,k=0;
    char str[100];
    scanf("%[^
]s",str);
    
while(str[i]!=NULL)

    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            v++;
        }
        else if(isdigit(str[i]))
        d++;
        else if(str[i]==' ')
        s++;
        else
        c++;
        i++;
    }
    printf("Vowels: %d
Consonants: %d
Digits: %d
White spaces: %d",v,c,d,s);
}