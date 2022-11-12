#include <stdio.h>
#define INIT_VALUE 999
int extEvenDigits1(int num);
void extEvenDigits2(int num, int *result);
int main()
{
   int number, result = INIT_VALUE;
   
   printf("Enter a number: \n");
   scanf("%d", &number);
   printf("extEvenDigits1(): %d\n", extEvenDigits1(number));        
   extEvenDigits2(number, &result);
   printf("extEvenDigits2(): %d\n", result);
   return 0;
}
int extEvenDigits1(int num) 
{
   int power  = 1;
   int total = 0;
   int digit;

   while (num > 0) {
      digit = num % 10;
      num /= 10;
      if ((digit % 2) == 0) {
         total += digit * power;
         power *= 10;
      }
   }
   return (power == 1) ? -1 : total;
}
void extEvenDigits2(int num, int *result) 
{
   int power  = 1;
   int total = 0;
   int digit;

   while (num > 0) {
      digit = num % 10;
      num /= 10;
      if ((digit % 2) == 0) {
         total += digit * power;
         power *= 10;
      }
   }
   if (power == 1) 
      *result = -1;
   else
      *result = total;
}