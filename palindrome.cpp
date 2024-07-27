#include<stdio.h>
#include<string.h>
main()
{
	char a[100],b[100];
	printf("Enter The String To Reverse: ");
	scanf("%s",&a);
	strcmp(b,a);
	strrev(b);
	if(strcmp(b,a)==0)
	printf("It is A Palindrome");
	else
	printf("It Is Not A Palindrome");
	return 0;
}
