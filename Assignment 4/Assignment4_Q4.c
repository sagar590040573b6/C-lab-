#include <stdio.h>

int main()
{
    int marks = 80;
    float average;
    char grade = 'A';

    if (marks >= 40)
    {
        average = marks;

        printf("Marks = %d\n", marks);
        printf("Average = %.2f\n", average);
        printf("Grade = %c\n", grade);
    }
    else
    {
        printf("Student failed.\n");
    }

    return 0;
}
