/*
Q57 (Arrays (1D))

Question:
Find the sum of array elements.
*/

#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid array size");
        return 0;
    }

    printf("Enter array elements: ");

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum = %d", sum);

    return 0;
}