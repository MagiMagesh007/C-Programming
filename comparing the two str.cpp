#include<stdio.h>
#include<string.h>
main()
{
	char a[20],b[20];
	printf("Enter The Password: ");
	scanf("%s",&a);
	printf("Renter The Password: ");
	scanf("%s",&b);
	if(strcmp(a,b)==0)
	{
		printf("Valid");
	}
	else
	{
		printf("!!Invalid!!");
	}
}
