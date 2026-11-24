
/*
Section A: Pointers with Arrays
A3. Transpose of a Matrix
*/

#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j;
    int (*p)[10];

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    p = a;

    printf("\nTranspose of matrix:\n");

    for(j = 0; j < c; j++)
    {
        for(i = 0; i < r; i++)
        {
            printf("%d ", p[i][j]);
        }

        printf("\n");
    }

    return 0;
}
