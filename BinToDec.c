#include <stdio.h>
#include <math.h>
int main() 
{        

    int decimalnum = 0, temp = 0, remainder;
       int binarynum;
       printf("Enter a binary number: \n");
       scanf("%ld", &binarynum);
       while (binarynum!=0){
           decimalnum = decimalnum + (binarynum%10)*pow(2,temp);
           temp++;
           binarynum = binarynum/10;
       }
   printf("The equivalent decimal number: %d\n", decimalnum);


   return 0;  
}