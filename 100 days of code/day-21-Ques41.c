#include <stdio.h>

int main() {
    // cwap 1st and last digit
    int n, first, last, temp, digits = 1, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    // Find the place value of the first digit
    while (temp >= 10) {
        temp = temp / 10;
        digits = digits * 10;
    }

    first = temp;
    last = n % 10;

    // Remove first and last digits
    n = n % digits;
    n = n / 10;

    // Swap first and last digits
    result = last * digits + n * 10 + first;

    printf("Number after swapping first and last digit = %d", result);

    return 0;
} 