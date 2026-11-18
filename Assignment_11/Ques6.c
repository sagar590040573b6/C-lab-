// Question 6: Static Global Variable
// Demonstrate that a static global variable can be accessed
// only within the same source file.

#include <stdio.h>

static int num = 100;

void display()
{
    printf("Value of static global variable: %d\n", num);
}

int main()
{
    printf("Inside main file:\n");
    printf("Value of num = %d\n", num);

    display();

    return 0;
}