#include <stdio.h>
#include <math.h>
#include <string.h>
int hexStrToDec(char *hex);
int main()
{
   int num;
   char hex[100];
   
   printf("Enter a hexadecimal number: \n"); 
   scanf("%s",&hex);
   num=hexStrToDec(hex);
   printf("hexStrToDec(): %d\n", num);
   return 0;
}
int hexStrToDec(char *hex)
{

   int temp=0;
   sscanf(hex,"%x",&temp);
   return temp;

}

#include <stdio.h>
#include <string.h>

//hexa to deci
int main() {
    int a; //deci
    char str[]="20"; //hexa
    a = strtol(str,NULL,16);
    printf("%d",a);
    return 0;
}