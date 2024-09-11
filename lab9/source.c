/*
    check if the entered int is a prime number 
*/

#include<stdio.h>

int main(){
    int i = 0;
    int prime = 0;
    int flag = 0;
    printf("\n--------------------\n");
    printf("Enter any number: ");
    scanf("%d", &prime);
    if(prime <= 1){
        printf("\n%d is not a prime number\n", prime);
        return 0;
    }
    for(i = 2; i <= (prime/2); i++){
        if (prime % i == 0) {
            printf("\n%d is not a prime number, it's divisible by %d\n\n", prime, i);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("\n%d is a prime number\n\n", prime);
    return 0;
}