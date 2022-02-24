#include<stdio.h>
int main()
{
 int n, n1, rev =0, rem;
 
 //printf("Enter any number: ");
 scanf
("%d",&n); 
 n1 = n;
 
 //logic
 while(n >0)
{
 rem = n % 10;
 rev = rev * 10+ rem;
 n = n / 10;}
 printf("%d",rev);
 return 0;}
