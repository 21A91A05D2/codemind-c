#include <stdio.h>
int main()
{
    int arr[100], freq[10];
    int n, i, j,sum=0,c=0,count;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }
    for(i=0; i<n; i++)
    {
        count = 1;
        for(j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                freq[i] = 0;
            }
        }
 
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    for(i=0; i<n; i++)
    {
        if(freq[i] == 1)
        {
            if(arr[i]%2==0 )
            {
                c++;
            }
        }
    }
    printf("%d",c);

    return 0;
}