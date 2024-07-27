#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n, star;

  printf("Enter number of rows: ");
  scanf("%d",&n);

  for(int i=1; i< 2*n; i++)
  {
    if(i < n) star=i;
    else star = abs(2*n-i);

    for(int j=1; j<=star; j++)
    printf("*"); 

    printf("\n");
  }
  return 0;
}
