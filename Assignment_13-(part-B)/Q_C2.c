
/*
Section C: Pointers to Functions
C2. Array of Function Pointers
*/

#include <stdio.h>

int square(int n)
{
    return n * n;
}

int cube(int n)
{
    return n * n * n;
}

int factorial(int n)
{
    int i, fact = 1;

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n, choice, result;
    int (*ptr[3])(int) = {square, cube, factorial};

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\n1. Square\n");
    printf("2. Cube\n");
    printf("3. Factorial\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice >= 1 && choice <= 3 && n >= 0)
    {
        result = ptr[choice - 1](n);
        printf("Result = %d\n", result);
    }
    else
    {
        printf("Invalid choice or number.");
    }

    return 0;
}
