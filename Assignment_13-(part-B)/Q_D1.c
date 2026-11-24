
/*
Section D: Pointers to Structures
D1. Student Marks Using Structure Pointer
*/

#include <stdio.h>

struct Student
{
    int marks1, marks2, marks3;
};

int main()
{
    struct Student s;
    struct Student *p;

    int total;
    float average;
    char grade;

    p = &s;

    printf("Enter marks of three subjects: ");
    scanf("%d %d %d",
          &p->marks1, &p->marks2, &p->marks3);

    total = p->marks1 + p->marks2 + p->marks3;

    average = total / 3.0;

    if(average >= 90)
        grade = 'A';
    else if(average >= 75)
        grade = 'B';
    else if(average >= 60)
        grade = 'C';
    else if(average >= 40)
        grade = 'D';
    else
        grade = 'F';

    printf("\nTotal Marks = %d", total);
    printf("\nAverage Marks = %.2f", average);
    printf("\nGrade = %c", grade);

    return 0;
}
