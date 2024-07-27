#include<stdio.h>
int main()
{
    int i;
    printf("Enter The Number: ");
    scanf("%d",&i);
    if(i%3==0 || i%5==0)
    printf("FizzBuzz");
    else if(i%3==0 || i%5!=0)
    printf("Fizz");
}
