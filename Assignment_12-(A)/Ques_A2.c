
// Question A2: Array of Structures


#include <stdio.h>

struct Student
{
    int roll;
    char name[30];
    float m1, m2, m3, average;
};

int main()
{
    struct Student s[100];
    int n, i;
    float highest = -1;

    printf("Enter number of students: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid number of students!\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("\nEnter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter name: ");
        scanf("%29s", s[i].name);

        printf("Enter marks in three subjects: ");
        scanf("%f %f %f", &s[i].m1, &s[i].m2, &s[i].m3);

        s[i].average = (s[i].m1 + s[i].m2 + s[i].m3) / 3;

        if (s[i].average > highest)
        {
            highest = s[i].average;
        }
    }

    printf("\nStudents with the highest average:\n");

    for (i = 0; i < n; i++)
    {
        if (s[i].average == highest)
        {
            printf("\nRoll Number: %d\n", s[i].roll);
            printf("Name: %s\n", s[i].name);
            printf("Average: %.2f\n", s[i].average);
        }
    }

    return 0;
}