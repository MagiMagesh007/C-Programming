#include <stdio.h> 
int main() { 
	int p=0, n=0, z=0, a=0,sum=0,Avg; 

	printf("Enter an integer  (-1 to quit): "); 
	scanf("%d",&a); 
	while(a != -1) { 
		if(a > 0) p++; 
		else if(a < 0) n++; 
		else z++; 
		printf("\nEnter next integer (-1 to quit): "); 
		scanf("%d",&a); 
	} 
	for(z=0;z<n;++z)
	{
		scanf("%d",&p);
		sum=sum+p;
	}
	Avg=sum/a;
	n++;
	printf("You have entered ...\n"); 
	printf("\t\tPositive numbers: %d\n",p); 
	printf("\t\tNegative numbers: %d\n",n); 
	printf("\t\tAverage Of Positive Number: %d\n",Avg);
	return 0;
}