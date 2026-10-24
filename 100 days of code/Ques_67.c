/*
Q67 (Arrays (1D))

Question:
Insert an element in an array at a given position.
Position starts from 1.
*/

#include <stdio.h>

int main() {
    int arr[101], n, value, pos, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    if (n < 0 || n >= 100) {
        printf("Invalid array size");
        return 0;
    }

    printf("Enter array elements: ");

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &value);

    printf("Enter position: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position");
        return 0;
    }

    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;
    n++;

    printf("Array after insertion: ");

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}