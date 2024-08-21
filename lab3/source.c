/*
    For LDP-1. Utilising the Standard input output library only
*/

#include<stdio.h>

//addition 
float addition(float a, float b){
    return a + b;
}

//subtraction 
float subtraction(float a, float b){
    return a - b;
}

//multiplication 
float multiplication(float a, float b){
    return a * b;
}

//division 
float division(float a, float b){
    return a / b;
}


int main(){

    float action, resultant, a, b = 0;

    printf("\n--------------------------\n");
    printf("Calculator --> \n");
    printf("--------------------------\n");
    printf("Enter the FIRST number you want to operate with: ");
    scanf("%f", &a);
    printf("Enter the SECOND number you want to operate with: ");
    scanf("%f", &b);
    printf("--------------------------\n");
    printf("Press one of the following\n numbers for the corrosponding operation \n");
    printf("------------------\n");
    printf("1)Addition\n");
    printf("------------------\n");
    printf("2)Subtraction\n");
    printf("------------------\n");
    printf("3)Multiplication\n");
    printf("------------------\n");
    printf("4)Division\n");
    printf("--------------------------\n");
    scanf("%f", &action);
    printf("--------------------------\n");
    
    // does check for invalid input
    if (action == 1){
        resultant = addition(a, b);
        printf("Adding ");
    } else if (action == 2){
        resultant = subtraction(a, b);
        printf("Subtracting ");
    } else if (action == 3){
        resultant = multiplication(a, b);
        printf("Multiplying ");
    } else if (action == 4){
        resultant = division(a, b);
        printf("Dividing ");
    } else {
        printf("Invalid operation\n");
        return 1;  // Return an error code for invalid operation
    }

    printf("%0.2f and %0.2f gives %0.2f\n", a, b, resultant); 
    printf("--------------------------\n");   

    return 0;
}