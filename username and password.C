#include <stdio.h>
#include <string.h>


int main(void)
{
    char u[10];
    char p[10];
	char i;

    printf("Username:   ");
    scanf("%s",&u);
    
    printf("\n");
    
    printf("Password:   ");
    scanf("%s",&p);
    
	i=(u==p);
	printf("valid",i);
	if (u!=p)
	printf("invalid",i);
    return 0;
}