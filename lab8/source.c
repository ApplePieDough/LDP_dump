/*
    Multi dimensional arrays and parallel arrays
*/

#include<stdio.h>
#define NO_OF_STUDENTS 4

int main()
{
    char students[NO_OF_STUDENTS][50];
    int rollNos[NO_OF_STUDENTS];
    int marks[NO_OF_STUDENTS][4];
    int i = 0, avg = 0, j = 0;

    printf("\n------------------------\n");
    printf("Generate Marksheets");
    for (i = 0; i < NO_OF_STUDENTS; i++)
    {
        printf("\nEnter the name of student %d: ", i + 1);
        scanf(" %[^\n]", &students[i]);
        printf("Enter the roll number for %s: ", students[i]);
        scanf("%d", &rollNos[i]);
        printf("Enter the student's marks\n");
        for (j = 0; j < 4; j++)
        {   
            printf("\nfor subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    printf("\n------------------------\n");
    printf("Marksheets -> \n");
    for (i = 0; i < NO_OF_STUDENTS; i++)
    {
        avg = 0;
        printf("\n------------------------\n");
        printf("%s, call number %d has scored\n", students[i], rollNos[i]);
        for (j = 0; j < 4; j++)
        {
            avg += marks[i][j];
            printf("%d Marks for subject %d\n", marks[i][j], j + 1);
        }
        printf("Avg %d", avg / 4);
        printf("\n------------------------\n");
    }
    return 0;
}