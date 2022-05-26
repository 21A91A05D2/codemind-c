#include<stdio.h>
int main()
{
	int i,j,arr[100],c,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		c=1;
		if(arr[i]!=-1)
		{
		
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j] && i!=j)
			{
				c++;
				arr[j]=-1;
			}
		}
		printf("%d %d\n",arr[i],c);
	}
	}
}
