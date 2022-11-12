#include <math.h>
#include <stdio.h>

int main() 
{
    double x,sum=0;;
    printf("Enter x:\n");
    scanf ("%lf",&x);
    sum = 1 + (x/1) + (pow(x,2)/2) + (pow(x,3)/6) + (pow(x,4)/24) + (pow(x,5)/120) + (pow(x,6)/720) + (pow(x,8)/40320)\
    + (pow(x,9)/362880) + (pow(x,7)/5040) + (pow(x,10)/3628800);
    
    printf("Result = %.2lf",sum);
    
   return 0;
}