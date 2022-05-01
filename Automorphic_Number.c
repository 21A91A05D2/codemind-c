#include<stdio.h>

int checkAutomorphic(int num){
    
    int square = num * num;
    
    while(num != 0)
    {
        // means not automorphic number
        if(num % 10 != square % 10){
            return 0;
        }
        
        // reduce down numbers
        num /= 10;
        square /= 10;
    }
    // if reaches here means automorphic number
    return 1;
}

int main ()
{
    int num, square;
    scanf("%d",&num);
    if(checkAutomorphic(num))
        printf("Automorphic Number");
    else
        printf("Not an Automorphic Number");
    

}