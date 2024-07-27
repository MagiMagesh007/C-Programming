#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n;

  printf("Enter number of rows: ");
  scanf("%d",&n);

  for(int i=1; i<= 2*n; i++)
  {
    for(int j=1; j<=n; j++)
    if(j<= abs(n-i))
	printf(" ");
    else printf("*");

    printf("\n"); //next line
  }

  return 0;
}
