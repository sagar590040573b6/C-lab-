
// Question C2: Array of Unions


#include <stdio.h>

union Number
{
    int i;
    float f;
};

int main()
{
    union Number num[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &num[i].i);
    }

    printf("\n--- Integer Values ---\n");

    for (i = 0; i < 3; i++)
    {
        printf("Element %d: %d\n", i + 1, num[i].i);
    }

    num[1].f = 7.5f;

    printf("\nAfter overwriting the second element:\n");
    printf("Second element as float: %.2f\n", num[1].f);

    printf("First element: %d\n", num[0].i);
    printf("Third element: %d\n", num[2].i);

    return 0;
}