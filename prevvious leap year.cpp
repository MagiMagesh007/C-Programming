#include<stdio.h>
#include<conio.h>
int main()
{
	int y,d,m,n,c,b,i;
	printf("Enter the date: ");
	scanf("%d",&d);
	printf("Enter The month: ");
	scanf("%d",&m);
	printf("Enter A Year : ");
	scanf("%d",&y);
	c=y%4;
	if((y%4==0) && ((y%400==0) || (y%100==0)))
	{
		printf(" %d/%d/%d is a leap year",d,m,y);
	}
		else
		{
			printf("%d/%d/%d is not a leap year",d,m,y);
			printf("%d",y-c);
		}
		getch();	
}
