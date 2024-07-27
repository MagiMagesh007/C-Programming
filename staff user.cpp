#include<stdio.h>
int main()
{
	int tu,su,nts,stu;
	printf("Enter The Total User: ");
	scanf("%d",&tu);
	printf("Enter The Staff User: ");
	scanf("%d",&su);
	nts=su/3;
	stu=tu-su-nts;
	printf("The Total Student User Is: %d",stu);
}
