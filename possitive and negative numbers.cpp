//positive and negative integer
//foc day 1 ques 15
#include<stdio.h>
int main()
{
	int number;
	printf("Enter a number:");
	scanf("%d",&number);
	if(number<0)
	printf("%d is a negative integer.",number);
	else
	printf("%d is a positive integer.",number);
	return 0;
}
