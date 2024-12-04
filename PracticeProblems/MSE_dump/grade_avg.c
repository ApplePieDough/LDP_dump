// average and total grade of three subjects for three students
#include <stdio.h>

int main ()
{
    int studentGrades = 0;
    int studentTotal[5] = { 0 };
    int studentAvg[5] = { 0 };
    printf("\n-----\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter student %d's marks for subject %d: ", i + 1, j + 1);
            scanf("%d", &studentGrades);
            studentTotal[i] = studentTotal[i] + studentGrades;
        }
        printf("\n-----\n");
    }

    for (int i = 0; i < 5; i++)
    {
        studentAvg[i] = studentTotal[i] / 3;
        printf("Student %d scored %d total and %d on average\n", i + 1, studentTotal[i], studentAvg[i]);
    }
    return 0;
}