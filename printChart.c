#include <stdio.h>
void printChart(int x, int y, int z);
int main() 
{
   int x,y,z;

   printf("Enter 3 inputs: \n");
   scanf("%d %d %d", &x, &y, &z);
   printf("The bar chart is: \n");
   printChart(x,y,z);
   return 0;
}
void printChart(int x, int y, int z)
{
    int max =x;
    int i,j,k;
    if (y>max){
        max = y;
    }
    if(z>max){
        max=z;
    }


    for (i=max;i>0;i--){ 
        for (j=1;j<4;j++){ 
            if (j==1 && x==i){
                printf("*");
                x--;
            }
            else if (j==2 && y==i){
                printf("*");
                y--;
            }
            else if (j==3 && z==i){
                printf("*");
                z--;
            }
            else{
                printf(" ");
            }

        }
    printf("\n");
    }
}