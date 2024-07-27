#include <stdio.h>
#include<conio.h>
int main()
{
	int a=0,b=1,c,d,i;
	printf("Enter The Size Of The Series: ");
	scanf("%d",&d);
	printf("%d\n%d",a,b);
	for(i=2;i<=d;i++)
	{
		c=a+b;
		printf("\n%d",c);
		a=b;
		b=c;
	}
}
