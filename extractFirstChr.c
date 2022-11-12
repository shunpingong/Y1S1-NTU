#include <stdio.h>
#include <string.h>
void extractFirstChar(char *str1, char *str2);
int main()
{
   char str1[80], str2[80], *p;
   
   printf("Enter a string: \n");
   fgets(str1, 80, stdin);
   if (p=strchr(str1,'\n')) *p = '\0';  
   extractFirstChar(str1, str2); 
   printf("extractFirstChar(): %s\n", str2);
   return 0;
}    
void extractFirstChar(char *str1, char *str2)  
{

    int i=0;
    int j=1;
    *(str2) = *(str1);
    while (*(str1+i)!= '\0'){
        if (*(str1+i) == ' '){
            (*(str2+j)) = *(str1+i+1);
            j++;
        }
            i++;
    }
    *(str2+j) = '\0';
   
}

void extractFirstChar(char *str1, char *str2)  
{
   int i, j, len=0, isspace = 1;
	
   len = strlen(str1);
   j = 0;
   for (i=0; i < len; i++){
      if (isspace == 1) {
         str2[j] = str1[i];
         isspace = 0;
         j++;
      }
      if (str1[i] == ' ')
         isspace = 1;
   }
   str2[j] = '\0';
} 