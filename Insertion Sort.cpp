#include<stdio.h>
int main()
{
	int n,i,j,t;
	int arr[64];
	printf("Enteer No.Of Elements\n");
	scanf("%d",&n);
	printf("Enter %d Integers\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=n-1;i++)
	{
		j=i;
		while(j>0 && arr[j-1]>arr[j])
		{
			t=arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=t;
			j--;
		}
	}
	printf("Sorted List In Ascending Order:\n");
	for(i=0;i<=n;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
