#include<stdio.h>
long int mN(int n);
int main() 
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, mN(n));
    return 0;
}
long int mN(int n) 
{
    if (n>=1)
        return n*mN(n-1);
    else
        return 1;
}
