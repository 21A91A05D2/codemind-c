#include<stdio.h>
void bubble_sort(int *arr,int n)
{
	int i,j,temp=0;
		for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
int main()
{
	int i,search=0,res=0,n,j,arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&search);
	bubble_sort(arr,n);
	for(i=0;i<n;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
		if (arr[i]==arr[j])
		printf("%d ",arr[i]);
	    }
	}
}