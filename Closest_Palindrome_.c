#include<bits/stdc++.h>
bool palindrome(int n)
{
    int r,sum=0,temp;
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(sum==temp)
      return true;
    else
       return false;
}
int main()
{
    int n,d1,d2,i;
    std::cin>>n;
    for(i=n+1;;i++)
    {
        bool found=palindrome(i);
        if(found)
          {
              d1=i-n;
              break;
          }
    }
    for(i=n-1;;i--)
    {
        bool found=palindrome(i);
        if(found)
         {
             d2=n-i;
             break;
         }
    }
    if(d1==d2)
      std::cout<<n-d1<<" "<<n+d2;
    else if(d1>d2)
      std::cout<<n-d2;
    else
      std::cout<<n+d1;

    return 0;
}