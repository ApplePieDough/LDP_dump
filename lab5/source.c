/*
    Swapping the vales of two variables using an extra variable  
*/

#include<stdio.h>

int main(){
    int a = 15;
    int b = 25;
    int c = 0;
    printf("\n---------------------------------\n");
    printf(" The variable a is valued at %d. \n The variable b is valued at %d\n\n", a, b);

    // Assigning the value of b to c
    c = b;
    // now assigning the value of a to b
    b = a;
    // finally assigning the value of c(original value of b) to a
    a = c;

    printf(" After performing reassignment operations, the variable a is valued at %d. \n The variable b is valued at %d\n", a, b);
    return 0;
}