// check the last digit of an integer to find if its odd or even 
#include <stdio.h>

int main ()
{
    int i = 0, rem = 11;
    printf("\nEnter an integer: ");
    scanf("%d", &i);
    for (rem = 11; rem > 10; i / 10)
    {
        rem = i % 10;
    }
    printf("the entered integer's last digit is %d", rem);
    if (rem % 2 == 0)
    {
        printf(", an even number\n");
    }
    else
    {
        printf(", an odd number\n");
    }
    return 0;
} 