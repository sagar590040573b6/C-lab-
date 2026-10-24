/*
Q58 (Arrays (1D))

Question:
Find the maximum and minimum element in an array.
*/

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int max, min;

    printf("Enter size of array: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid array size");
        return 0;
    }

    printf("Enter array elements: ");

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d", min);

    return 0;
}