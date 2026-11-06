
// Question A4: Structure Passed to Functions


#include <stdio.h>

struct Student
{
    int roll;
    char name[30];
    float m1, m2, m3;
    char grade;
};

void displayStudent(struct Student s);
float totalMarks(struct Student s);
void updateGrade(struct Student *s, char newGrade);

int main()
{
    struct Student s;

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter name: ");
    scanf("%29s", s.name);

    printf("Enter marks in three subjects: ");
    scanf("%f %f %f", &s.m1, &s.m2, &s.m3);

    printf("Enter grade: ");
    scanf(" %c", &s.grade);

    printf("\n--- Student Details ---\n");
    displayStudent(s);

    printf("Total Marks: %.2f\n", totalMarks(s));

    updateGrade(&s, 'A');

    printf("\nAfter updating grade:\n");
    displayStudent(s);

    return 0;
}

void displayStudent(struct Student s)
{
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f %.2f %.2f\n", s.m1, s.m2, s.m3);
    printf("Grade: %c\n", s.grade);
}

float totalMarks(struct Student s)
{
    return s.m1 + s.m2 + s.m3;
}

void updateGrade(struct Student *s, char newGrade)
{
    s->grade = newGrade;
}