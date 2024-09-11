#include<stdio.h>

int main(){

    // char to ascii
    char ASCII;
    printf("Enter any character: ");
    scanf("%c", &ASCII);
    printf("%i\n\n", ASCII);

    // ascii(int) to char
    int ascii_code = 0;
    printf("enter an integer between 0 and 127: ");
    scanf("%i", &ascii_code);
    printf("%c\n\n", ascii_code);

    // maths with chars
    // since all chars have an index value in the ASCII table, their codes act
    // as integers and can be operated on by using maths operators
    char maths = 'A' + '\t'; 
    printf("A(65) + \\t(9) = %c(%d)\n", maths, maths);

    return 0;
}