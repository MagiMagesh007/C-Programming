#include<stdio.h>
int main()
{
	int pa,y,in,r;
	char age;
	printf("Enter The Principal Amount: ");
	scanf("%d",&pa);
	printf("Enter No Of Years: ");
	scanf("%d",&y);
	printf("Is Customer Is A Senior Citizen (y/n): ");
	scanf("%s",&age);
	if((age=='y')||(age=='Y'))
	{
		r=12;
		in=(pa*r*y)/100;
		printf("Intrest Is: %d",in);
	}
	else if ((age=='n')||(age=='N'))
	{
		r=10;
		in=(pa*r*y)/100;
		printf("Interest Is: %f",in);
	}
	return 0;
	
}
