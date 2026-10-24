/*
Q68 (Arrays (1D))

Question:
Delete an element from an array.
Position starts from 1.
*/

#include <stdio.h>

int main() {
    int arr[100], n, pos, i;

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

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n) {
        printf("Invalid position");
        return 0;
    }

    for (i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Array after deletion: ");

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}