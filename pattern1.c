#include <stdio.h>
int main()
{
   int height;  
   int i, j;

   printf("Enter the height: \n");
   scanf("%d", &height);
   printf("The pattern is: \n");
   for (i=0; i<height; i++) {
      for (j=0; j < height-i-1; j++) {
         printf(" ");
      }
      for (j=0; j<=i; j++) {
         printf("*");
      }
      for (j=0; j<i; j++) {
         printf("*");
      }
      printf("\n");
   }
   return 0;
}