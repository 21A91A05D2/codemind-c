#include<stdio.h>
int main()
{
    int l,n,w,h,t;
    scanf("%d
",&l);
    scanf("%d
",&n);
    for(t=0;t<n;t++)
    {
        scanf("%d %d",&w,&h);
        if(w<l || h<l)
        {
            printf("UPLOAD ANOTHER
");
        }
        else
        {
            if(w>=l && h>=l)
            {
                if(w==h)
                {
                    printf("ACCEPTED
");
                }
                else
                {
                    printf("CROP IT
");
                }
            }
        }
    }
}