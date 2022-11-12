#include <stdio.h>
#include <string.h>
char *insertStr(char *a, char *s);
int main()
{
   char a[40],s[40],*p;

   printf("Enter the string a: \n");
   fgets(a, 40, stdin);  
   if (p=strchr(a,'\n')) *p = '\0';
   printf("Enter the string s: \n");
   fgets(s, 40, stdin);  
   if (p=strchr(s,'\n')) *p = '\0';
   insertStr(a,s);
   printf("insertStr(): ");
   puts(a);   
   return 0;
}
char *insertStr(char *a, char *s)
{

    char temp;
    strcat(a,s);
    int len = strlen(a);
    
    for (int i =0 ;i<len;i++){
        for (int j=0;j<len-1;j++){
            if (a[j]>a[j+1]){
                temp = a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
   }

}