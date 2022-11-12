#include <stdio.h>
int main()
{
  double x;
   double temp=1.0;
   double term=1.0;
   int n;
   int sign=1;
   int d=1;

   printf("Enter a number: \n");
   scanf("%lf", &x);
   for (n=1; n<=20; n++) {
      d *= n;
      sign = -sign;
      term *= x;
      temp += sign * term/d;
   }
   printf("Result = %.2f\n", temp);
   return 0;
}