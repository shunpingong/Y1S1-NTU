#include <stdio.h>
#include <string.h>
void extractLastChar(char *str1, char *str2);
int main()
{
   char str1[80], str2[80], *p;
   
   printf("Enter a string: \n");
   fgets(str1, 80, stdin);  
   if (p=strchr(str1,'\n')) *p = '\0';
   extractLastChar(str1, str2);
   printf("extractLastChar(): %s\n", str2);
   return 0;
}  
void extractLastChar(char *str1, char *str2)  
{

   int i=0,j=0;
   while (*(str1+i)!='\0'){
       if (*(str1+i)==' '){
           (*(str2+j)) = (*(str1+i-1));
           j++;
       }
       i++;
   }
   *(str2+j)=*(str1+i-1);
   *(str2+j+1)='\0';
}

void extractLastChar(char *str1, char *str2)  
{
   int i=0, j, len=0, isspace = 1;
	
   while (str1[i]!='\0') {
      i++;
      len++;
   }
   j = 0;
   for (i=0; i < len; i++){
      if (isspace == 1) 
         isspace = 0;            
      if (str1[i] == ' '){
         isspace = 1;
         str2[j] = str1[i-1];
         j++;        
      }
   }
   str2[j] = str1[len-1];
   str2[j+1] = '\0';
} 