#include<stdio.h>  
int main()   
    {   
        float P , R , T , SI ;  
        printf("Enter The Principal Amount: ");
		scanf("%d",&P);
		printf("Enter No Of Years: ");
		scanf("%d",&T); 
		printf("Enter Th ROI");
		scanf("%d",&R);
        SI  = (P*R*T)/100;   
        printf("\n\n Simple Interest is : %f", SI);  
        return (0);  
    }  
