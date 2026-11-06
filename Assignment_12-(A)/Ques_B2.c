

/* Question B2: Combined Use of typedef, Nested Structures,
Arrays, and Pointers */


#include <stdio.h>

typedef struct
{
    int day, month, year;
} Date;

typedef struct
{
    int roll;
    char name[30];
    float cgpa;
    Date dob;
} Student;

void displayStudent(Student *s);
void checkScholarship(Student *s);

int main()
{
    Student s[100];
    int n, i;

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

        printf("Enter CGPA: ");
        scanf("%f", &s[i].cgpa);

        printf("Enter date of birth (DD MM YYYY): ");
        scanf("%d %d %d",
              &s[i].dob.day,
              &s[i].dob.month,
              &s[i].dob.year);
    }

    printf("\n--- Student Details ---\n");

    for (i = 0; i < n; i++)
    {
        displayStudent(&s[i]);
        checkScholarship(&s[i]);
    }

    return 0;
}

void displayStudent(Student *s)
{
    printf("\nRoll Number: %d\n", s->roll);
    printf("Name: %s\n", s->name);
    printf("CGPA: %.2f\n", s->cgpa);

    printf("Date of Birth: %d-%d-%d\n",
           s->dob.day, s->dob.month, s->dob.year);
}

void checkScholarship(Student *s)
{
    if (s->cgpa >= 8.5)
        printf("Scholarship: Eligible\n");
    else
        printf("Scholarship: Not Eligible\n");
}