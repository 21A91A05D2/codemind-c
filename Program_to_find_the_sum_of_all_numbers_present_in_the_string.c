#include<stdio.h>
int main()
{
    char str[100];
    int i,nc=0,sum;
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if((str[i]>='0')&&(str[i]<='9'))
        {
            nc++;
            sum +=(str[i]-'0');
        }
    }
    printf("%d
",sum);
}