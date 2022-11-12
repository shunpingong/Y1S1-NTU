#include <stdio.h>
int main()
{
   int height;  
   int i, j, num;

   printf("Enter the height: \n");
   scanf("%d", &height);
   printf("The pattern is: \n");
   for (i=0; i<height; i++) {
      num = i;
      for (j=0; j < height-i-1; j++) {
         printf(" ");
      }
      for (j=0; j<=i; j++) {
         num++;
         printf("%d", (num)%10);
      }
      num--;
      for (j=0; j<i; j++) {
         printf("%d", (num-j)%10);
      }
      printf("\n");
   }
   return 0;
}