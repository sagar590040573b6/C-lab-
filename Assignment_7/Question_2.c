#include <stdio.h>

int main() {
    int n, i, search;
    int arr[100];
    int count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    printf("\nArray positions where %d is found: ", search);

    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("%d ", i + 1);
            count++;
        }
    }

    if (count == 0) {
        printf("\nElement %d was not found in the array.\n", search);
    } else {
        printf("\nTotal number of occurrences = %d\n", count);
    }

    return 0;
}