/*
Q60 (Arrays (1D))

Question:
Count positive, negative, and zero elements in an array.
*/

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int positive = 0, negative = 0, zero = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid array size");
        return 0;
    }

    printf("Enter array elements: ");

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] > 0) {
            positive++;
        } else if (arr[i] < 0) {
            negative++;
        } else {
            zero++;
        }
    }

    printf("Positive = %d\n", positive);
    printf("Negative = %d\n", negative);
    printf("Zeros = %d", zero);

    return 0;
}