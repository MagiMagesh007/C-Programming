#include<stdio.h>
int main()
{
	int a,b,c,d,a1,b1,c1,d1,tot;
	printf("Enter the first denomination:- ");
	scanf("%d",&a);	
	printf("Enter the first denomination number of notes:- ");
	scanf("%d",&a1);
	printf("Enter the second denomination:- ");
	scanf("%d",&b);
	printf("Enter the second denomination number of notes:- ");
	scanf("%d",&b1);
	printf("Enter the thrid denomination:- ");
	scanf("%d",&c);
	printf("Enter the third denomination number of notes:- ");
	scanf("%d",&c1);
	printf("Enter the fourth denomination:- ");
	scanf("%d",&d);
	printf("Enter the fourth denomination number of notes:- ");
	scanf("%d",&d1);
	tot=a*a1+b*b1+c*c1+d*d1;
	printf("Total avaliable balnce in ATM:- %d",tot);
}
