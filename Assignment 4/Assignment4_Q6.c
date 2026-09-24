#include <stdio.h>

int main()
{
    float marks1, marks2, marks3, average;

    printf("Enter marks of three subjects: ");
    scanf("%f %f %f", &marks1, &marks2, &marks3);

    average = (marks1 + marks2 + marks3) / 3;

    printf("\nAverage = %.2f\n", average);

    if (marks1 >= 40 && marks2 >= 40 && marks3 >= 40)
    {
        printf("Student passed all subjects.\n");
    }
    else
    {
        printf("Student failed in one or more subjects.\n");
    }

    if (average >= 75)
    {
        printf("Student scored distinction.\n");
    }

    return 0;
}
