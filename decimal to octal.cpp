 #include<stdio.h>
 #include<math.h>
 int main()
 {
     int dec, oct=0, rem, i=0;

     printf("Enter Decimal Number: ");
     scanf("%d",&dec);

     while(dec!=0)
     {
         rem = dec%8;
         oct += (rem * pow(10,i));
         dec /= 8;
         i++;
     }

     printf("Octal value= %d",oct);

     return 0;
 }
