/*
    Multi dimensional arrays and parallel arrays
*/

#include<stdio.h>

int main(){
    char students[4][25] ={"Raf", "Mikey", "Donney", "Leo"};
    int rollCall[4] = {1, 2, 3, 4};
    int sub1Marks[4] = {72, 65, 85, 89};
    int sub2Marks[4] = {78, 95, 75, 82};
    int sub3Marks[4] = {81, 79, 95, 82};
    int sub4Marks[4] = {94, 92, 87, 72};
    int total, percentage;
    total = percentage = 0;
    int i = 0;

    printf("\n--------------------------------\n");
    printf("Mark Sheets --> \n");
    
    for (i = 0; i < 4; i++){
        total = percentage = 0;
        printf("--------------------------------\n");
        printf("Roll No %d) %s scored \n", rollCall[i], students[i]);
        printf("\t%d in subject 1\n", sub1Marks[i]);
        printf("\t%d in subject 2\n", sub2Marks[i]);
        printf("\t%d in subject 3\n", sub3Marks[i]);
        printf("\t%d in subject 4\n", sub4Marks[i]);
        total = sub1Marks[i] + sub2Marks[i] + sub3Marks[i] + sub4Marks[i];
        percentage = total / 4;
        printf("Total Score: %d / 400\n", total);
        printf("Percentage score: %d\n", percentage);
        printf("--------------------------------\n");
    }

    return 0;
}