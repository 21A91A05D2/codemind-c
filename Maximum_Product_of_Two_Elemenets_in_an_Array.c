#include<stdio.h>
void bubble_sort(int *arr,int n)
{
	int i,j,p,k,f,temp=0,swapcount=0;
	for(p=0;p<=n;p++)
	{
		swapcount=0;
		for(i=0,j=1;j<n-p;i++,j++)
	{
			if(arr[i]>arr[j])
			{
				swapcount++;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
			
	
	}
	if(swapcount==0)
	{
		break;
	}
	}
}
int main()
{
	int i,n,k,f,arr[100];
	//scanf("%d",&n);
	n=5;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubble_sort(arr,n);
//	printf("%d",n);
	for(i=0;i<n;i++)
	{
        k=arr[n-1];
        f=arr[n-2];
	}
	 printf("%d",(k-1)*(f-1));

}
