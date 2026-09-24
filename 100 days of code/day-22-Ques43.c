#include <stdio.h>

int main() {
    // check no. is strong number
    int n, original, digit, fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        digit = n % 10;

        fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        n = n / 10;
    }

    if (sum == original)
        printf("Strong number");
    else
        printf("Not a strong number");

    return 0;
}