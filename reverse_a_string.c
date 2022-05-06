#include<stdio.h>
int main()
{
	char str[100];
	int i,j,l=0,t;
	scanf("%[^
]s",str);
	for(i=0;str[i]!=NULL;i++)
	{
		l++;
	}
	i=0;
	j=l-1;
	while(i<j)
	{
		t=str[j];
	str[j]=str[i];
	str[i]=t;
	i++;
	j--;
    }
	printf("%s",str);
	return 0;
}