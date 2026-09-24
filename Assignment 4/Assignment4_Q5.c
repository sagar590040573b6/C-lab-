#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\nArithmetic Operations:\n");

    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);

    if (b != 0)
    {
        printf("Division = %.2f\n", (float)a / b);
        printf("Modulus = %d\n", a % b);
    }
    else
    {
        printf("Division = Cannot divide by zero\n");
        printf("Modulus = Cannot divide by zero\n");
    }

    printf("\nMathematical Operations:\n");

    printf("Power (a^b) = %.2f\n", pow(a, b));
    printf("Square root of a = %.2f\n", sqrt(a));
    printf("Absolute value of a = %d\n", abs(a));
    printf("Floor value of a = %.2f\n", floor(a));
    printf("Ceiling value of a = %.2f\n", ceil(a));

    return 0;
}
