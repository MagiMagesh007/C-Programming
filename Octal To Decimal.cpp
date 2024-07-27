#include<stdio.h>
 #include<math.h>
 int main()
 {
     int oct, dec=0, rem, i=0;

     printf("Enter a Octal Number: ");
     scanf("%d",&oct);

     while(oct!=0)
     {
         rem = oct%10;
         dec += (rem * pow(8,i));
         oct /= 10;
         i++;
     }

     printf("Decimal Value = %d",dec);

     return 0;
 }
