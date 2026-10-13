
#include <stdio.h>

int A[10][10], B[10][10], C[10][10];
int r1, c1, r2, c2;

int multiplyCell(int i, int j, int k)
{
    // Base condition: All products for the current cell are processed.
    if (k == c1)
        return 0;

    return A[i][k] * B[k][j] +
           multiplyCell(i, j, k + 1);
}

void multiplyMatrices(int index)
{
    // Base condition: All cells of the result matrix are calculated.
    if (index == r1 * c2)
        return;

    int i = index / c2;
    int j = index % c2;

    C[i][j] = multiplyCell(i, j, 0);

    multiplyMatrices(index + 1);
}

int main()
{
    int i, j;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (r1 < 1 || r1 > 10 || c1 < 1 || c1 > 10 ||
        r2 < 1 || r2 > 10 || c2 < 1 || c2 > 10)
    {
        printf("Invalid matrix dimensions.\n");
        return 0;
    }

    if (c1 != r2)
    {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    printf("Enter first matrix elements:\n");

    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &A[i][j]);

    printf("Enter second matrix elements:\n");

    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &B[i][j]);

    multiplyMatrices(0);

    printf("Product matrix:\n");

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
            printf("%d ", C[i][j]);

        printf("\n");
    }

    return 0;
}
