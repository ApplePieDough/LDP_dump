/*
    Convert seconds to hours, minutes and seconds
*/

#include<stdio.h>

int main(){
    int h, m, s;
    h = m = s = 0;
    printf("\n---------------------------------\n");
    printf("Enter time in seconds: ");
    scanf("%d", &s);
    if (s != 0){
        h = s / 3600; // total hours
        s = s % 3600; // remaining seconds after total hours are calculated
        m = s / 60; // total minutes from remaining seconds
        s = s % 60; // remaining seconds after minutes are calculated
    } 
    printf("\nThe time is %d Hours, %d Minutes, %d Seconds\n", h, m, s);

    return 0;
}