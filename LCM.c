#include<stdio.h>
int main()
{
	int a,b,i=1;
	scanf("%d%d",&a,&b);
	while(i>0)                                             
	{
		if(i%a==0&&i%b==0)
		{
		printf("%d",i);
		break;
	    }
	    i++;
	}
	return 0;
}