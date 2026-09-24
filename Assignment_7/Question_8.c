#include <stdio.h>

int main() {
    int n1, n2, i;
    int arr1[100], arr2[100], merged[200];

    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter %d elements of first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter %d elements of second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge first array
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Merge second array
    for (i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    printf("\nMerged array: ");

    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    printf("\n");

    return 0;
}