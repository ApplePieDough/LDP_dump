/*
    Swapping the values of variables without using an extra variable
*/

#include<stdio.h>

int main(){

    int a = 15;
    int b = 25;
    
    printf("\n-------------------------------\n");
    printf("Variable a is valued at %d and variable b is valued at %d\n\n", a, b);
    // add the variables, store sum in a 
    a = a + b;
    printf("step 1) a:%d  b:%d\n\n", a, b);
    // subtract b from the sum, remainder will be the original value of b, store it in b
    b = a - b;
    printf("step 2) a:%d  b:%d\n\n", a, b);
    // subtract b(original a) from a(sum of a and b).remainder will be original value of b. store in a 
    a = a - b;
    printf("step 3) a:%d  b:%d\n\n", a, b);
    printf("The values are thus swapped\n");

    return 0;
}