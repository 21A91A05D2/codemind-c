#include<stdio.h>
int main() 
{ 
 int num,rem = 0, sum = 0, n;
 scanf("%d",&num);
 
 //Make a copy of num and store it in variable n 
 n = num; 
 
 //Calculates sum of digits 
 while(num > 0){ 
 rem = num%10; 
 sum = sum + rem; 
 num = num/10; 
 } 
 
 //Checks whether number is divisible by sum of digits 
 if(n%sum == 0) 
 printf("True"); 
 else 
 printf("False"); 
 
 return 0; 
}