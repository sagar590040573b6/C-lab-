// Question 3: Automatic and Static Variables

#include <stdio.h>

void display()
{
    auto int a = 1;
    static int s = 1;

    printf("Automatic variable = %d\n", a);
    printf("Static variable = %d\n", s);

    a++;
    s++;
}

int main()
{
    
    printf("First function call:\n");
    display();

    printf("\nSecond function call:\n");
    display();

    printf("\nThird function call:\n");
    display();

    return 0;
}
