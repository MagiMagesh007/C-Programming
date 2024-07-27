#include <stdio.h>
struct stud
{
	int obtained_marks;
	int per;
	char grade[10];	
};
struct stud s[5];
int i;
int main()
{
	for(i=1;i<=5;i++);
	{
		printf("Enter %d Student Obtained Marks : ",i);
		scanf("%d",&s[i].obtained_marks);
	}
	for(i=1;i<=5;i++)
	s[i].per=s[i].obtained_marks/4;
	for(i=1;i<=5;i++)
	{
		if(s[i].per>75)
			strcpy(s[i].grade,"Distinction");
		else if(s[i].per<75 && s[i].per>=60)
			strcpy(s[i].grade,"1st Division");
		else if(s[i].per<60 && s[i].per>=50)
			strcpy(s[i].grade,"2nd Division");
		else if(s[i].per<50 && s[i].per>=40)
			strcpy(s[i].grade,"3rd Division");
		else
			strcpy(s[i].grade,"Fail");
	}
	for(i=1;i<=5;i++)
	printf("%d student %s has obtained grade %s",i,s[i].grade);
	getch();
	return 0;
}
