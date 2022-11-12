#include <stdio.h>
int reverseDigits(int num);
int main()
{
int num, result=999;
printf("Enter a number: \n");
scanf("%d", &num);
printf("reverseDigits(): %d\n", reverseDigits(num));
return 0;
}
int reverseDigits(int num)
{

    int digit = 0 , result = 0 , power =10;
    
    do{
        digit = num%10;
        result = result*power + digit;
        num=num/10;
    }while (num>0);
    return result;

}