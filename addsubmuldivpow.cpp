#include<stdio.h>
#include<math.h>
main()
{
	int a,b,n,r;
	printf("1.add\n2.sub\n3.mul\n4.div\n5.pow");
	printf("\nAny Operator To Do The Calculation : ");
	scanf("%d",&n);
	printf("Enter The Two Operands : ");
	scanf("%d%d",&a,&b);
	switch(n)
	{
		case 1:
			printf("The Addition Is : %d",a + b);
			break;
		case 2:
			printf("The Subraction Is : %d",a - b);
			break;
		case 3:
			printf("The Multiplication Is : %d",a * b);
			break;
		case 4:
			printf("The Division Is : %d",a / b);
			break;
		case 5:
			r=pow(a,b);
			printf("The Power Is : %d",r);
			break;
		default: 
			printf("Invalid");
	}
	
}
