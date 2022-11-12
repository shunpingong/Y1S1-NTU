#include <stdio.h>
#include <string.h>
void wordEquivalent(int num, char *str);
int main()
{
   int num;
   char str[40]="";
   
   printf("Enter the number: \n");			
   scanf("%d", &num);
   wordEquivalent(num, str);
   printf("wordEquivalent(): %s", str);	
   return 0;
}
void wordEquivalent(int num, char *str)
{
   switch(num/100)
   {  
      case 0: 
         do {	
            switch(num%10){
               case 0: strcat(str,"zero "); 
                  break;
               case 1: strcat(str,"one "); 
                  break;
               case 2: strcat(str,"two "); 
                  break;
               case 3: strcat(str,"three "); 
                  break;
               case 4: strcat(str,"four "); 
                  break;
               case 5: strcat(str,"five "); 
                  break;
               case 6: strcat(str,"six "); 
                  break;
               case 7: strcat(str,"seven "); 
                  break;
               case 8: strcat(str,"eight "); 
                  break;
               case 9: strcat(str,"nine "); 
                  break;
            }
            num /= 10;
         } while (num != 0);
         break;
      default: strcat(str,"Input exceeds 99");
   }
}
