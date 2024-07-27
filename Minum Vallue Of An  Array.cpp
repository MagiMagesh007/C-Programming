#include <stdio.h>
int main()
{
 int i, min;
 int arr[5] = {1, 2, 3, 4, 5};
 min = arr[0];

 for(i=1; i<5; i++)
 {
  if(min > arr[i])
   min = arr[i];
 }
 
 printf("Minimum value of Array: %d", min);
 return 0;
}
