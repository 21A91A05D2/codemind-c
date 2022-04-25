#include<stdio.h>
int main()
{
    int arr[1000],i,j,x=0,y=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        x=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                x++;
            }
        }
        if(arr[i]==x)
        {
            y++;
            printf("%d ",x);
            arr[i]=-1;
            
        }
        
    }
    if(y==0)
    printf("-1");

}