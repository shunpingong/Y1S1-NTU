#include <stdio.h>
#include <math.h>
int main()
{      
   int decimalnum = 0, temp = 0;
   int octalnum;

   printf("Enter an octal number: \n");
   scanf("%d", &octalnum);
   while (octalnum != 0)
   {
      decimalnum = decimalnum + (octalnum%10) * pow(8,temp);
      temp++;
      octalnum = octalnum / 10;
   }
   printf("The equivalent decimal number: %d", decimalnum);
}