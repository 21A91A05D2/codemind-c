#include<stdio.h>
//#include<string.h>
//#include<conio.h>
int main()
{
    int i=0,j=0;
    char res[100],str[100];
   scanf("%s",str);
   //clrscr();
 //  gets(str);
    while(str[i]!=NULL)
    {
        if((str[i]>='A')&&(str[i]<='Z'))
        {
            res[j]=str[i]+32;
        }
        else
        res[j]=str[i];
        i++;
        j++;
    }
    res[j]=NULL;
    //puts (res);
    for(j=0;res[j]!=NULL;j++)
   printf("%c",res[j]);
    return 0;
    
}