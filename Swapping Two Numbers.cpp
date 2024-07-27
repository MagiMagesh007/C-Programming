#include <stdio.h>
int main()
{
 int num1 = 67;
 int num2 = 770;
 int temp = 0;

 temp = num1;
 num1 = num2;
 num2 = temp;
 
 printf("After swapping...");
 printf("\nnum1 = %d", num1);
 printf("\nnum2 = %d", num2);
 return 0;
}
