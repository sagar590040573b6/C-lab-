
/*
Section A: Pointers with Arrays
A1. Largest and Smallest Elements
*/

#include <stdio.h>

int main()
{
    int a[100], n, i;
    int largest, smallest;
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    p = a;
    largest = *p;
    smallest = *p;

    for(i = 0; i < n; i++)
    {
        if(*(p + i) > largest)
            largest = *(p + i);

        if(*(p + i) < smallest)
            smallest = *(p + i);
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);

    return 0;
}
