// find a specific character in a string 
#include <stdio.h>

int main ()
{
    int i = 0;
    char string[255] = {};
    char c;
    printf("\nEnter a string to be searched: ");
    scanf("%s", string);
    printf("Enter the character to be searched: ");
    scanf(" %c", &c);
    for (i = 0; string[i] != '\0'; i++)
    {
        if(string[i] == c)
            break;
    }
    printf("the character %c is on the %d indice in the string or the %d position in the word\n", c, i, i + 1);

    return 0;
}