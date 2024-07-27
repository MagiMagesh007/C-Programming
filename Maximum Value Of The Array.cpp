#include <stdio.h>
int main()
{
 int i, max;
 int arr[5] = {1, 2, 3, 4, 5};
 max = arr[0];

 for(i=1; i<5; i++)
 {
  if(max < arr[i])
   max = arr[i];
 }
 
 printf("Maximum value of Array: %d", max);
 return 0;
}
