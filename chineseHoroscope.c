#include <stdio.h>
int main() 
{						
   char *animal = " ";
   int year, index;
							
   do {
      printf("Enter your birth year: \n");	
      scanf("%d", &year);
      if (year != -1)	{
         index = (year - 1984) % 12;	// or any other pivot values 1972,1996
         if (index < 0)
            index = index + 12;					
         switch (index)		{
            case 0: animal = "Rat";	
               break;
            case 1: animal = "Cow";	
               break;
            case 2: animal = "Tiger";	
               break;
            case 3: animal = "Rabbit";	
               break;
            case 4: animal = "Dragon";	
               break;
            case 5: animal = "Snake";	
               break;
            case 6: animal = "Horse";	
               break;		
            case 7: animal = "Goat";	
               break;
            case 8: animal = "Monkey";	
               break;
            case 9: animal = "Rooster";	
               break;
            case 10: animal = "Dog";	
               break;
            case 11: animal = "Pig";	
               break;
            default: printf("Error\n");
         }
         printf("chineseHoroscope: %s\n", animal); 	
      }			
   } while (year != -1 );				
   return 0;
}