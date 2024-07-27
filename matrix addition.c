#include<stdio.h>
#include<conio.h>
int main()
{
	int r1,r2,r3,r4,mat1,a;
	int c1,c2,c3,c4,mat2,b;
	char choice;
	printf("You Need To Do The Matrix Addition");
	scanf("%s",choice);
	if(choice==yes)
	{
		printf("%dEnter The 1st Number:");
		scanf("%d\n",&r1);
		printf("%dEnter The 2nd Number:");
		scanf("%d\n",&r2);
		printf("%dEnter The 3rd Number:");
		scanf("%d\n",&r3);
		printf("%d\nEnter The 4th Number:");
		scanf("%d",&r4);

		printf("%dEnter The 1st Number:");
		scanf("%d\n",&c1);
		printf("%dEnter The 2nd Number:");
		scanf("%d\n",&c2);
		printf("%dEnter The 3rd Number:");
		scanf("%d\n",&c3);
		printf("%dEnter The 4th Number:");
		scanf("%d",&c4);
	}

	mat1=(r1+c1),(r2+c2),(r3+c3),(r4+c4);
	printf("%d",mat1);
	getch();	
	else
	printf("Sorry For The Process");
	return 1;
	
}
