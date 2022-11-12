#include <stdio.h>
#include <math.h>
int main()
{       

   int bin=0;
   int oct=0;
   int dec=0;
   int i=0;
   printf("Enter a binary number:\n");
    scanf("%d",&bin);
    while (bin!=0){
        dec = dec + (bin%10)*pow(2,i);
        i++;
        bin = bin/10;
    }
    i=1;
    while (dec!=0){
        oct = oct + (dec%8)*i;
        i*=10;
        dec = dec/8;
    }
    printf("The equivalent octal number: %d\n",oct); 

   return 0;  
}