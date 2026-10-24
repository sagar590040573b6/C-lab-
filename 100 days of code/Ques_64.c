/*
Q64 (Arrays (1D))

Question:
Find the digit that occurs the most times in an integer number.
*/

#include <stdio.h>

int main() {
    int n, digit, i;
    int freq[10] = {0};
    int max = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0) {
        n = -n;
    }

    if (n == 0) {
        freq[0] = 1;
    }

    while (n > 0) {
        digit = n % 10;
        freq[digit]++;
        n /= 10;
    }

    for (i = 0; i < 10; i++) {
        if (freq[i] > max) {
            max = freq[i];
        }
    }

    printf("Most frequent digit(s): ");

    for (i = 0; i < 10; i++) {
        if (freq[i] == max) {
            printf("%d ", i);
        }
    }

    return 0;
}