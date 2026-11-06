

// Question B1: Structure Using typedef


#include <stdio.h>

typedef struct
{
    int roll;
    char name[30];
    float cgpa;
} Student;

int main()
{
    Student s[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("\nEnter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter name: ");
        scanf("%29s", s[i].name);

        printf("Enter CGPA: ");
        scanf("%f", &s[i].cgpa);
    }

    printf("\n--- Student Records ---\n");

    for (i = 0; i < 3; i++)
    {
        printf("\nRoll Number: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("CGPA: %.2f\n", s[i].cgpa);
    }

    return 0;
}