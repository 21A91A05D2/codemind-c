#include<stdio.h>
int main()
{
	int n,i,m,a[100],k;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=n;i<m;i++)
	{
		printf("%d ",a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]); 
	}
}