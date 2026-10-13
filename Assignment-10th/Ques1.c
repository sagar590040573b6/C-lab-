
#include <stdio.h>

long long factorial(int n)
{
    // Base condition: Factorial of 0 or 1 is 1.
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

int main()
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 1 || n > 20)
    {
        printf("Please enter a number between 1 and 20.\n");
    }
    else
    {
        printf("Factorial of %d = %lld\n", n, factorial(n));
    }

    return 0;
}
