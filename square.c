#include <stdio.h>
int square1(int num);
void square2(int num, int *result);
int main()
{
   int number, result=0;

   printf("Enter the number: \n");
   scanf("%d", &number);
   printf("square1(): %d\n", square1(number)); 
   square2(number, &result);
   printf("square2(): %d\n", result);                
   return 0;
}

int square1(int num)
{ 
    int count=0;
    int total=0;
    int k =1;
    while (count<num){
        count ++;
        total += k;
        k +=2;
    }
    return total;
}  

void square2(int num, int *result)
{ 
    int count=0,k=1;
    while (count<num){
        count ++;
        *result +=k;
        k+=2;
    }
}