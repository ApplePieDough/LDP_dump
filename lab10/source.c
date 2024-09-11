/*
fibonacci sequence up-to 20 numbers starting from
the integer entered by user
*/

#include<stdio.h>

int main()
{
    int i = 0, num1 = 0, num2 = 1;
    printf("\n--------------------\n");
    
    printf("the Fibonacci sequence upto the first 20 numbers follows - \n| %d |", num1);
    for (i = 1; i < 20; i++)
    {
        num2 = num2 + num1; // add the previous num to current num
        num1 = num2 - num1; // update the previous term to be the current term
        printf(" %d |", num2);
    }
    printf("\n--------------------\n");
    return 0; 
}
