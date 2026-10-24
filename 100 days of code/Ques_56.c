/*
Q56 (Arrays (1D))

Question:
Read and print elements of a one-dimensional array.
*/

#include <stdio.h>

int main() {
    int arr[100], n, i;

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

    printf("Array elements: ");

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}