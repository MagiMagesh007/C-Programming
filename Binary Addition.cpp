//Program For Binary Addition day 2 ques 22
#include<stdio.h>
int main()
{
	long b1,b2;
	int i=0,rem=0,sum[20];
	printf("Enter the first binary number:");
	scanf("%ld",&b1);
	printf("Enter the second binary number:");
	scanf("%ld",&b2);
	while(b1 !=0||b2 !=0)
	{
		sum[i++]=(b1%10 + b2%10 + rem)%2;
		rem=(b1%10 + b2%10 + rem)/2;
		b1=b1/10;
		b2=b2/10;
	}
	if(rem!=0)
	sum[i++]=rem;
	--i;
	printf("sum of two binary numbers:");
	while(i>=0)
	printf("%d",sum[i--]);
	return 0;
}
