#include <stdio.h>
#include <string.h>
void compareChar(char *str1, char *str2, char *str3);
int main()
{
   char str1[80],str2[80],str3[80];
   
   printf("Enter the first string: \n");
   scanf("%s",str1);
   printf("Enter the second string: \n");
   scanf("%s",str2);
   compareChar(str1, str2, str3);
   printf("compareChar(): %s\n", str3);
   return 0;
}
void compareChar(char *str1, char *str2, char *str3)
{
   int z=0;
    while (*str1){ //str1 longer than str2
        if (*str1>*str2){
            str3[z++]=*(str1);
        }
        else{
            str3[z++]=*(str2);
        }
        str1++;
        str2++;
    }
    str3[z]='\0'; //make str3 a string
    strcat(str3,str2); //add remaining str2 into str3

}