#include <stdio.h>
#include <string.h>
void minCharToEnd(char *str);
int main()
{
   char str[80];
   
   printf("Enter a string: \n");
   scanf("%s",str);
   minCharToEnd(str); 
   printf("minCharToEnd(): %s",str);  
   return 0;
}
void minCharToEnd(char *str) 
{
   char min,*q; 
   int i=0,len;
   
   min=str[0];
   len=strlen(str);
   q=str;
   while (str[i] != '\0') {
      if (min>str[i]) {
         min=str[i];
         q=str+i;
      }
      i++;
   }
   while (*q!='\0') {
      *q=*(q+1);
      q++;
   }
   str[len-1]=min;
}