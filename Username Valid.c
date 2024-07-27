#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[20]="magi@123";
	char b[20]="magi@123";
	int n;
	n=strcmp(a,b);
	if (n==0)
	printf("Valid");
	else if (n>0)
	printf("Invalid");
	else
	printf("invalid");
}