#include<stdio.h>
void bubble_sort(int *arr,int n)
{
	int i,j,p,temp=0,swapcount=0;
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
	int i,n,arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubble_sort(arr,n);
if(n<3)
{
    i=n-1;
    printf("%d",arr[i]);
}
else if(n<2)
{
    i=n;
    printf("%d",arr[i]);
}
    else
    {
        
        i=n-3;
        if(arr[i]==arr[i+1])
        printf("%d",arr[i-1]);
        else
	    printf("%d ",arr[i]);
    }
}
