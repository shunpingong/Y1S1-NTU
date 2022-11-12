#include <stdio.h>
#define N 20
int remDuplicates(int a[], int size);
int main()
{
   int a[N],i,size;
   
   printf("Enter array size: \n");
   scanf("%d",&size);
   printf("Enter %d data:\n",size);
   for (i=0; i<size; i++)
      scanf("%d",&a[i]);    
   size=remDuplicates(a,size);
   printf("remDuplicates(): \n");
   for (i=0; i<size; i++) 
      printf("%d ",a[i]);
   printf("\n");
   return 0;
}
int remDuplicates(int a[], int size)
{
	/*edit*/
   /* Write your code here */
   if (size == 0 || size == 1)
        return size;
 
    int temp[size];
 
    // Start traversing elements
    int j = 0;
    // If current element is not equal to next element
    // then store that current element
    for (int i = 0; i < size - 1; i++)
        if (a[i] != a[i + 1])
            temp[j++] = a[i];
 
    // Store the last element as whether it is unique or
    // repeated, it hasn't stored previously
    temp[j++] = a[size - 1];
 
    // Modify original array
    for (int i = 0; i < j; i++)
        a[i] = temp[i];
 
    return j;



	/*end_edit*/
}