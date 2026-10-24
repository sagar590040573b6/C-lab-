/*
Q66 (Arrays (1D))

Question:
Insert an element in a sorted array at the appropriate position.
*/

#include <stdio.h>

int main() {
    int arr[101], n, value, i;

    printf("Enter size of sorted array: ");
    scanf("%d", &n);

    if (n < 0 || n >= 100) {
        printf("Invalid array size");
        return 0;
    }

    printf("Enter sorted array elements: ");

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &value);

    i = n - 1;

    while (i >= 0 && arr[i] > value) {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = value;
    n++;

    printf("Array after insertion: ");

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}