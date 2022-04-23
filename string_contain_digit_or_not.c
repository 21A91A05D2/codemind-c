#include<stdio.h>
int main()
{
    char str[100];
    int count=0,i=0;
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if((str[i]>='0')&&(str[i]<='9'))
        {
            count+=1;
        }
    }if(count!=0)
    printf("Contains %d digit",count);
    else
    printf("Doesn't contain digit");
}