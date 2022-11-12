#include <stdio.h>
int main() 
{        
   int i,j,k;
   int height;
   printf("Enter the height: \n");
   scanf("%d",&height);
   
   printf("The pattern is: \n");
   for (i=1;i<=height;i++){
       for (j=0;j<=height-i;j++){
           printf(" ");
       }
       if (i%2==1){
           printf("+");
       }
       for (k=1;k<=i-1;k++){
           printf("=+");
       }
       if (i%2==0){
           printf("=");
       }
    printf("\n");
   }
   return 0;
}