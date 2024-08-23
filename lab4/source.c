/*
    logic operators (||) logical OR, (&&) logical AND and (!) logical NOT
*/ 

#include<stdio.h>

int main(){
    int a ,b = 0;
    
    printf("\n\nThe following two entries will be compared to 10 and the nature of their relation printed below\n\n 1:");
    scanf("%d", &a);
    printf(" 2:");
    scanf("%d", &b);
    if(a > 10 && b > 10){ // if a & b are greater than 10
        printf("\nBoth entries are greater than 10\n");
    } else if (a > 10 || b > 10){ // if either a or b is greater than 10
        printf("\nOne of the entries is greater than 10\n");
    } else if ( (!(a > 10)) && (!(b > 10))){ // if neither a or b are greater than 10 
        printf("\nNone of the entries are greater than 10\n");
    }

    return 0;
}