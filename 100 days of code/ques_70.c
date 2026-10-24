/*
Q70 (Arrays (1D))

Question:
Rotate an array to the right by k positions.
*/

#include <stdio.h>

int main() {
    int arr[100], n, k, i, j, temp;

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

    printf("Enter k: ");
    scanf("%d", &k);

    k = ((k % n) + n) % n;

    for (i = 0; i < k; i++) {
        temp = arr[n - 1];

        for (j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }

        arr[0] = temp;
    }

    printf("Rotated array: ");

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}