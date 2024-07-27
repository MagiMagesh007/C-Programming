//Find The Given Integer is Odd Or Even
//foc day 1 ques 08
#include<stdio.h>
int main()
{
	int n;
	printf("Enter The Number To Check Whether The Given NNumber Is Odd Or Even: ");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("%d Is A Even Number",n);
	}
	else
	{
		printf("%d Is A Odd Number",n);
	}
}
