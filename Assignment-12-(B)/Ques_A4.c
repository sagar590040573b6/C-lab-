
/* A4. Menu-driven Calculator
   Use enum MenuChoice to perform calculator operations.
   Repeat until the user selects EXIT.
*/

#include <stdio.h>

enum MenuChoice
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY,
    DIVIDE,
    EXIT
};

int main()
{
    int choice;
    float a, b;

    do
    {
        printf("\n\n--- Calculator Menu ---");
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == EXIT)
        {
            printf("Calculator closed.");
            break;
        }

        if (choice < ADD || choice > DIVIDE)
        {
            printf("Invalid choice!");
            continue;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);

        switch (choice)
        {
            case ADD:
                printf("Result = %.2f", a + b);
                break;

            case SUBTRACT:
                printf("Result = %.2f", a - b);
                break;

            case MULTIPLY:
                printf("Result = %.2f", a * b);
                break;

            case DIVIDE:
                if (b == 0)
                    printf("Division by zero is not allowed!");
                else
                    printf("Result = %.2f", a / b);
                break;
        }

    } while (1);

    return 0;
}
