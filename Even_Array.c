#include<stdio.h>
int main()
{
    int arr[100],i,n,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
	   scanf("%d",&arr[i]);
 	 for(i=0;i<n;i++)
        {
        	if(arr[i]%2==0)
        	{
        			c++;
				}
		
			}
		if(c==n)
		printf("True");
		else
		printf("False");
	
		return 0;
}
   