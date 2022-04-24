#include<stdio.h>
int main()
{
    int a,num1=0,num2=1,temp,flag=0,x,y;
    scanf("%d",&a);
    while(num2<=a)
    {
        temp=num2;
        num2=num1+num2;
        num1=temp;
        if(num2>=a&&num1<=num1)
        {
            x=num2-a;
            y=a-num1;
            break;
        }
    }
    if(x>y)
    {
       printf("%d",num1);     
    }
    else if(y>x)
    {
       printf("%d",num2);     
    }
    else if(x==y)
    { 
        printf("%d %d",num1,num2);
    }  
    return 0;
}