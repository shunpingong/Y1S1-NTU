#include <stdio.h>
int main()
{
   int octalnum = 0, temp = 1;
   int decimalnum;

   printf("Enter a decimal number: \n");
   scanf("%d", &decimalnum);

   while (decimalnum != 0)
   {
      octalnum = octalnum + (decimalnum % 8) * temp;
      decimalnum = decimalnum / 8;
      temp = temp * 10;
   }
   printf("The equivalent octal number: %d",octalnum);
   return 0;
}


//DECI STR TO OCTAL
#include <stdio.h>

int main(void)
{
   int octalnum=0;
   char decimalnum[20];

   printf("Enter a decimal number: \n");
   scanf("%s", decimalnum);
   sscanf(decimalnum,"%o",&octalnum);
   printf("The equivalent octal num: %d\n",octalnum);
}

//DEC INT TO OCTAL
#include <stdio.h>

int main(void)
{
   char octalnum[20];
   int decimalnum=0;

   printf("Enter a decimal number: \n");
   scanf("%d", &decimalnum);
   sprintf(octalnum,"%o",decimalnum);
   printf("The equivalent octal num: %s\n",octalnum);
}
   