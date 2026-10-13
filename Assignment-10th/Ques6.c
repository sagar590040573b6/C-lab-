
#include <stdio.h>

int findMaximum(int arr[], int n)
{
    // Base condition: The maximum of one element is the element itself.
    if (n == 1)
        return arr[0];

    int max = findMaximum(arr, n - 1);

    if (arr[n - 1] > max)
        return arr[n - 1];

    return max;
}

int countMaximum(int arr[], int n, int max)
{
    // Base condition: No elements remain to be counted.
    if (n == 0)
        return 0;

    return (arr[n - 1] == max) +
           countMaximum(arr, n - 1, max);
}

int main()
{
    int arr[100], n, i, max, count;

    printf("Enter the number of elements (1-100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid array size.\n");
        return 0;
    }

    printf("Enter %d elements: ", n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    max = findMaximum(arr, n);
    count = countMaximum(arr, n, max);

    printf("Maximum element = %d\n", max);
    printf("Number of occurrences = %d\n", count);

    return 0;
}