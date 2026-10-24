/*
Q69 (Arrays (1D))

Question:
Find the second largest element in an array.
This program finds the second largest distinct element.
*/

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int largest, second;
    int found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    if (n < 2 || n > 100) {
        printf("Invalid array size");
        return 0;
    }

    printf("Enter array elements: ");

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    for (i = 0; i < n; i++) {
        if (arr[i] < largest) {
            if (!found || arr[i] > second) {
                second = arr[i];
                found = 1;
            }
        }
    }

    if (found) {
        printf("Second largest element = %d", second);
    } else {
        printf("Second largest distinct element does not exist");
    }

    return 0;
}