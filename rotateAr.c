#include <stdio.h>
#define N 20
int main() 
{
   int a[N],i,j,k,m;
   int size;
   printf("Enter array size: \n");
   scanf("%d",&size);
   printf("Enter %d data: \n", size);
   for (i=0; i<size; i++)
      scanf("%d", &a[i]);
   printf("Result: \n");

    for (i=0;i<size;i++){
        k=a[size-1];
        
        for (j=size-2;j>=0;j--){
            a[j+1] = a[j];
        }
        a[0] = k;
        for (m=0;m<size;m++){
            printf("%d",a[m]);
        }
    printf("\n");
    }
   return 0;
}