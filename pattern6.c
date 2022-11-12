#include <stdio.h>
int main() 
{        

   int height=0;
   
    printf("Enter the height:\n");
    scanf("%d",&height);
    
    printf("The pattern is:\n");
    
    for (int i=0;i<height;i++){
        for (int j=0; j<height-1-i;j++){
            printf("*");
        }
        for (int z=0; z<i+1;z++){
            printf("=");
        }
        printf("\n");
        }

   return 0;  
}

#include <stdio.h>
int main()
{
   int m, n, height;
   printf("Enter the height: \n");
   scanf("%d", &height);
   printf("The pattern is: \n");
   for (m = 0; m < height; m++) 
   {
      for (n=0; n < height-m-1; n++) 			// print space
         printf("*");
      for (n = 0; n < m+1; n++) 				// print numbers
         printf("=");
      printf("\n");
   }
   return 0;
}
