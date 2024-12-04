#include <stdio.h>

// find greatest common denominator
int gcd (int a, int b);

int main()
{
    int a, b, ans = 0;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    ans = gcd(a, b);
    printf("the greatest common denominator for %d and %d is %d", a, b, ans);
    return 0;
}

int gcd (int a, int b)
{
    int i = 0, ans = 0;
    for (i = 0; i <= a/2; i++)
    {
        if ((a % i == 0) && (b % i == 0))
            ans = i;
    }
    return ans;
}