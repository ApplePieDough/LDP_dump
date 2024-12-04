#include <stdio.h>
#include <string.h>

//recursive factorialize
int factorial(int n);

int main()
{
    int n = 0, f = 0;
    printf("Enter a positive integer to factorialize: ");
    scanf("%d", &n);
    f = factorial(n);
    printf("The factorial of %d is %d", n, f);
    return 0;
}

int factorial(int n)
{
    if(n < 2)
        return 1;
    else 
        return factorial(n-1) * n;
}