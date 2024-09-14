// program to print patterns
#include<stdio.h>

int main()
{
    int i = 0, j = 0;
    printf("\n--------------------------------\n");
    
    printf("A) \n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {    
            printf("*");  
        }
        printf("\n");
    }

    printf("\nB) \n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }        
        printf("\n");
    }

    return 0;
}