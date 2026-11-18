// Question 8: Extern Storage Class


#include <stdio.h>

int number = 100;

int main()
{
    extern int number;

    printf("Value of global variable = %d\n", number);

    return 0;
}