#include <stdio.h>

int main()
{
    int a;
    float b;

    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("Enter a floating-point number: ");
    scanf("%f", &b);

    /* Implicit type conversion */
    printf("\nImplicit Type Conversion:\n");
    printf("Addition = %.2f\n", a + b);
    printf("Subtraction = %.2f\n", a - b);
    printf("Multiplication = %.2f\n", a * b);
    printf("Division = %.2f\n", a / b);

    /* Explicit type conversion */
    printf("\nExplicit Type Conversion:\n");
    printf("Addition = %.2f\n", (float)a + b);
    printf("Subtraction = %.2f\n", (float)a - b);
    printf("Multiplication = %.2f\n", (float)a * b);
    printf("Division = %.2f\n", (float)a / b);

    return 0;
}



