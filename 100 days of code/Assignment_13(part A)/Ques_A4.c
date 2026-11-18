// A4. Separate Even and Odd Elements

#include <stdio.h>

void separate_elements(int *arr, int n, int *even,
                       int *even_count, int *odd, int *odd_count)
{
    int i;

    *even_count = 0;
    *odd_count = 0;

    for (i = 0; i < n; i++)
    {
        if (*(arr + i) % 2 == 0)
        {
            *(even + *even_count) = *(arr + i);
            (*even_count)++;
        }
        else
        {
            *(odd + *odd_count) = *(arr + i);
            (*odd_count)++;
        }
    }
}

int main()
{
    int arr[100], even[100], odd[100];
    int n, i, even_count, odd_count;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    separate_elements(arr, n, even, &even_count, odd, &odd_count);

    printf("\nOriginal array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nEven elements: ");
    for (i = 0; i < even_count; i++)
        printf("%d ", even[i]);

    printf("\nOdd elements: ");
    for (i = 0; i < odd_count; i++)
        printf("%d ", odd[i]);

    printf("\nEven count = %d", even_count);
    printf("\nOdd count = %d\n", odd_count);

    return 0;
}