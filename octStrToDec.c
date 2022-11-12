#include <stdio.h>
int octStrTodec(char *str);
int main()
{
   char str[20],*sp;
   int num;
   
   printf("Enter an octal number: \n");
   scanf("%s",str);
   num=octStrTodec(str);
   printf("octStrTodec(): %d\n",num);
   return 0;
}
int octStrTodec(char *str) 
{
    int temp;
    sscanf(str,"%o",&temp);
    return temp;

}

int octStrTodec(char *str) 
{
   int num;
   
   num=*str-'0';
   while ( *(++str)!='\0' ) {
      num=num*8+*str-'0';
   }
   return num;
}