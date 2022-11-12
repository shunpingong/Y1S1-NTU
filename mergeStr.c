#include <stdio.h>
#include <string.h>
void mergeStr(char *a, char *b, char *c);
int main() 
{
   char a[40],b[40];
   char c[40],*p;

   printf("Enter the first string: \n");
   fgets(a, 40, stdin);  
   if (p=strchr(a,'\n')) *p = '\0';
   printf("Enter the second string: \n");
   fgets(b, 40, stdin);  
   if (p=strchr(b,'\n')) *p = '\0';
   mergeStr(a,b,c);
   printf("mergeStr(): ");
   puts(c);   
   return 0;
}
void mergeStr(char *a, char *b, char *c)  
{   
    //c is pointer constant refering to "abc"
    //need declare a pointer variable to assign address etc
    strcat(a,b);
    char temp;
    int length = strlen(a);
    for (int i =0;i<length;i++){
        for (int j=0; j<length-1;j++){
            if (a[j] > a[j+1]){
                temp = a[j+1];
                a[j+1] =a[j];
                a[j] = temp;
            }
        }
    }
    strcpy(c,a);

    while (*a!='\0'){
        *c++=*a++;
    }
    *c='\0';
}

void mergeStr(char *a, char *b, char *c)  
{   
    int i=0,j=0,k=0;
    char *p;
    while (a[i]!='\0' && b[j]!='\0'){
        if (a[i]<b[j]){
            c[k++]= a[i];
            i++;
        }
        else{
            c[k++] = b[j];
            j++;
        }
    }
    c[k]='\0';
    if (a[i]=='\0'){
        p=b+j;
    }
    else{
        p=a+i;
    }
    strcat(c,p);
}