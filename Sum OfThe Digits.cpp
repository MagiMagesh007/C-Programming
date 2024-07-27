#include <stdio.h>
int main()
{
 int num = 12;
 int copyNum = num;
 int total = 0;
 while(copyNum != 0)
 {
  total += copyNum % 10;
  copyNum = copyNum / 10;
 }
 printf("The sum of digit %d: %d", num, total);
 return 0;
}
