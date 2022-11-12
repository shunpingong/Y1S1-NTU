#include <stdio.h>
#include <math.h>
int main()
{
   int deci=0,bin=0;
   int temp=1;
   
   printf("Enter a decimal number:\n");
   scanf("%d",&deci);
    
    while (deci!=0){
        bin = bin + (deci%2)*temp;
        deci = deci/2;
        temp *= 10;
    }
    printf("The equivalent binary number: %d \n",bin);

   return 0;  
}