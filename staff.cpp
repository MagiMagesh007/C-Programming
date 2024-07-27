#include<stdio.h>
int main()
{
int total,staff;
printf("Total User : ");
scanf("%d",&total);
printf("Staff User : ");
scanf("%d",&staff);
int non_tea=staff/3;
int t_n=staff+non_tea;
int stu=total-t_n;
printf("Student Users: %d",stu);
}

