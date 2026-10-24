/*
Q59 (Arrays (1D))

Question:
Count even and odd numbers in an array.
*/

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int even = 0, odd = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid array size");
        return 0;
    }

    printf("Enter array elements: ");

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d", odd);

    return 0;
}