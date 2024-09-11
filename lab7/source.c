/* 
    convert entered char to its ASCII code
*/

#include<stdio.h>

int main(){

    char subject;

    printf("\n-------------------------------\n");
    printf("Enter the character you want the ASCII code for: ");
    scanf("%c", &subject);
    printf("\nthe ASCII code for %c is %d", subject, subject);
    printf("\n-------------------------------\n");
    return 0;
}