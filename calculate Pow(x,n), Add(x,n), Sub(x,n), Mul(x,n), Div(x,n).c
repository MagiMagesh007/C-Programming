#include <stdio.h>
#include <math.h>
int main()
{
   int x, n,num,result;
   printf("1.add\n2.sub\n3.mul\n4.div\n5.pow");
   printf("\n Enter any one operator you like ");
   scanf("%d", &num);
   printf("Enter the values of Operands x and n \n : ");
   scanf("%d%d", &x, &n);
   switch(num)
   {
      case 1:
	  	printf("Addition is %d",x + n);
		break;
      case 2:
	 	printf("Subracation is %d",x - n);
        break;
      case 3:
	  	printf("Multiplication is %d",x * n);
        break;
      case 4:
	  	printf("Division is %d",x / n);
        break;
      case 5:
      	result = pow(x,n);
    	printf("Power Is %d",result);
    	break;
      default:
	  	printf("\n Invalid Operator ");
   }
}
