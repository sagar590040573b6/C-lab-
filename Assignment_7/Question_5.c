#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    int arr[100];
    int largest, secondLargest;
    int smallest, secondSmallest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("At least 2 elements are required.\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = secondLargest = INT_MIN;
    smallest = secondSmallest = INT_MAX;

    for (i = 0; i < n; i++) {

        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } 
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }

        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } 
        else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    printf("\nLargest = %d", largest);
    printf("\nSecond Largest = %d", secondLargest);
    printf("\nSmallest = %d", smallest);
    printf("\nSecond Smallest = %d\n", secondSmallest);

    return 0;
}