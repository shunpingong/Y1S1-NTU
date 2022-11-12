#include <stdio.h>
#include <math.h>
int main()
{
   int decimalnum = 0, i = 0;
   long binarynum = 0;
   int octalnum;

   printf("Enter an octal number: \n");
   scanf("%d", &octalnum);

   while(octalnum != 0)
   {
      decimalnum = decimalnum + (octalnum%10) * pow(8,i);
      i++;
      octalnum = octalnum / 10;
   }

   i = 1;


   while (decimalnum != 0)
   {
      binarynum = binarynum + (decimalnum % 2) * i;
      decimalnum = decimalnum / 2;
      i = i * 10;
   }
   printf("The equivalent binary number: %d", binarynum);
   return 0;
}

#include <stdio.h>

int main(void)
{
   char octalnum[20];
   int decimalnum=0;
   int binary=0;
   int temp =1;
   printf("Enter an octal number: \n");
   scanf("%s", octalnum);
   sscanf(octalnum,"%o",&decimalnum);
   while (decimalnum!=0){
       binary = binary + (decimalnum%2)*temp;
       temp *=10;
       decimalnum = decimalnum/2;
   }
   printf("The equivalent bin num: %d\n",binary);
}