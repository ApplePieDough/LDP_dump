// finding numbers in the fibonnaci sequence upto specified iterations 
#include <stdio.h>

int main ()
{
    int n = 0, i = 0, p =0, currentNum = 1, previousNum = 0;

    printf("\nEnter the number of fibonacci values desired: ");
    scanf("%d", &n);
    printf("| 0 ");
    for (i = 1; i < n; i++)
    {
        p = currentNum + previousNum; 
        printf("| %d ", p); 
        previousNum = currentNum;
        currentNum = p;
    }
    printf("|\n");
}