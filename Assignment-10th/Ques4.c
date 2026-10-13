
#include <stdio.h>
#include <stdbool.h>

void findLargestTwo(int arr[], int n, int index,
                    int *largest, int *second,
                    bool *hasLargest, bool *hasSecond)
{
    // Base condition: All array elements have been checked.
    if (index == n)
        return;

    int x = arr[index];

    if (!*hasLargest || x > *largest)
    {
        if (*hasLargest)
        {
            *second = *largest;
            *hasSecond = true;
        }

        *largest = x;
        *hasLargest = true;
    }
    else if (x < *largest &&
             (!*hasSecond || x > *second))
    {
        *second = x;
        *hasSecond = true;
    }

    findLargestTwo(arr, n, index + 1, largest, second,
                   hasLargest, hasSecond);
}

int main()
{
    int arr[100], n, i;
    int largest = 0, second = 0;
    bool hasLargest = false, hasSecond = false;

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

    findLargestTwo(arr, n, 0, &largest, &second,
                   &hasLargest, &hasSecond);

    if (hasSecond)
        printf("Second-largest distinct element = %d\n", second);
    else
        printf("Fewer than two distinct elements exist.\n");

    return 0;
}
