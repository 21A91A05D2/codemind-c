#include<stdio.h>
int main()
{
    char str[100];
    int count=0,i=0,j=0,n;
    scanf("%d",&n);
    //scanf("%s",str);
    for(j=0;j<n;j++)
    {
        scanf("%s",str);
        count=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if((str[i]>='0')&&(str[i]<='9'))
        {
            count+=1;
        }
    }
    
    if(count!=0)
    printf("Yes
");
    else
    printf("No
");
    //str=0;
    }
}