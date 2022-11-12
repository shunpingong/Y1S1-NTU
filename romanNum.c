#include <stdio.h>
#define TRUE 1
#define FALSE 0
int romanNum(char *str);
int main()
{ 
   int num;
   char roman[10];
   printf("Enter a Roman number: \n");
   scanf("%s",roman);
   num = romanNum(roman);
   printf("romanNum(): %d\n", num);
   return 0;
}
int romanNum(char *str)
{
   int sum=0, flag=FALSE;
   
   while (*str != '\0')	{ 
      switch (*str) {
         case 'I':
            sum += 1; 
            if (flag == FALSE) 
               flag = TRUE;
            else  
               flag = TRUE;
            break;
         case 'V': 
            if (flag == TRUE) 
               sum += 3;
            else 
               sum += 5; 
            break;
         case 'X': 
            if (flag == TRUE) 
               sum += 8;
            else 
               sum += 10; 
      }
      str++;
   }
   return sum;
}