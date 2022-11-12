#include <stdio.h>
#include <string.h>
#define INIT_VALUE -1
int countSubstring(char str[], char substr[]);
int main() 
{
   char str[80], substr[80], *p; 
   int result=INIT_VALUE;
   
   printf("Enter the string: \n"); 
   fgets(str, 80, stdin);
   if (p=strchr(str,'\n')) *p = '\0';  
   printf("Enter the substring: \n"); 
   fgets(substr, 80, stdin);
   if (p=strchr(substr,'\n')) *p = '\0'; 
   result = countSubstring(str, substr);
   printf("countSubstring(): %d\n", result);     
   return 0;
}
int countSubstring(char str[], char substr[])
{
    //str= learn c programming
    //substr = pro
    //strstr(str,substr) returns pro
	int count=0;
    char *p = strstr(str,substr); //will return NULL if not there
    while (p!=NULL){
        count++;
        p = strstr(p+1,substr);
    }
    return count;

}