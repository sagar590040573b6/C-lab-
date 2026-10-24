/*
Q61 (Arrays (1D))

Question:
Search for an element in an array using linear search.
*/

#include <stdio.h>

int main() {
    int arr[100], n, key, i, found = 0;

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

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found");
    }

    return 0;
}