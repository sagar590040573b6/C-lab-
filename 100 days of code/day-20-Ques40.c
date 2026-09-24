#include <stdio.h>

int main() {
    // ones compliment of binar no.
    long long n, result = 0, place = 1, digit;

    printf("Enter a binary number: ");
    scanf("%lld", &n);

    while (n != 0) {
        digit = n % 10;

        if (digit == 0)
            result = result + 1 * place;
        else
            result = result + 0 * place;

        place = place * 10;
        n = n / 10;
    }

    printf("1's complement = %lld", result);

    return 0;
}