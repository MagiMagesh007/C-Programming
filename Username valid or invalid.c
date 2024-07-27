#include <stdio.h>
#include <string.h>


int main()
{
    char u[10],p[10];
    printf("\nUsername:   ");
    scanf("%s",&u);
    printf("Renter:");
    scanf("%s",&p);
	if (strcmp(u,p)==0)
	{
	printf("valid");}
	else
	{
	printf("invalid");}
    return 0;
}