#include <stdio.h>
#include <string.h>
#define N 20
void findLongShortStr(char str[N][81], char *longStr, char *shortStr, int size);
int main()
{
   char str[N][81],longStr[81],shortStr[81],*p;
   int i,size;
   char dummy;
   
   printf("Enter number (size) of strings: \n");
   scanf("%d", &size);
   scanf("%c",&dummy);
   for (i=0; i<size; i++){
      printf("Enter string %d: \n", i+1);
      fgets(str[i],81,stdin);
      if ( p=strchr(str[i],'\n') ) *p = '\0';
   }
   findLongShortStr(str, longStr, shortStr, size);
   printf("longest string: %s %d\n",longStr,strlen(longStr));
   printf("shortest string: %s %d\n",shortStr,strlen(shortStr));
   return 0;
}
void findLongShortStr(char str[N][81], char *longStr, char *shortStr, int size)
{

   int i;
   strcpy(longStr,str[0]);
   strcpy(shortStr,str[0]);
   for (i=0; i<size; i++){
      if (strlen(longStr) < strlen(str[i])) 
         strcpy(longStr,str[i]);
      if (strlen(shortStr) > strlen(str[i])) 
         strcpy(shortStr,str[i]);
   }


}