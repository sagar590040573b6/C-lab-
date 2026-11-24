// A2. Modifying a Variable through a Pointer

#include <stdio.h>

int main()
{
    int num;
    int *p;

    printf("Enter a number: ");
    scanf("%d", &num);

    p = &num;

    printf("Original value = %d\n", num);

    *p = *p + 10;

    printf("Modified value = %d\n", num);

    return 0;
}