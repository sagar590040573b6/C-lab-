#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float a, b, result;

    printf("\n--- Calculator Menu ---\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Power\n");
    printf("7. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 6) {
        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);
    }

    switch (choice) {

        case 1:
            result = a + b;
            printf("Result = %.2f", result);
            break;

        case 2:
            result = a - b;
            printf("Result = %.2f", result);
            break;

        case 3:
            result = a * b;
            printf("Result = %.2f", result);
            break;

        case 4:
            if (b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Cannot divide by zero");
            break;

        case 5:
            if ((int)b != 0)
                printf("Result = %d", (int)a % (int)b);
            else
                printf("Cannot find modulus by zero");
            break;

        case 6:
            result = pow(a, b);
            printf("Result = %.2f", result);
            break;

        case 7:
            printf("Thank you");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
