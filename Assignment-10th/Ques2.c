
#include <stdio.h>

long long fibonacci(int n)
{
    // Base condition 1: The 0th Fibonacci term is 0.
    if (n == 0)
        return 0;

    // Base condition 2: The 1st Fibonacci term is 1.
    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n, i;

    printf("Enter the number of terms (1-50): ");
    scanf("%d", &n);

    if (n < 1 || n > 50)
    {
        printf("Please enter a number between 1 and 50.\n");
    }
    else
    {
        printf("Fibonacci Series: ");

        for (i = 0; i < n; i++)
            printf("%lld ", fibonacci(i));

        printf("\n");
    }

    return 0;
}


