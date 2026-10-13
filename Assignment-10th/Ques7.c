
#include <stdio.h>

int checkSymmetric(int a[10][10], int n, int index)
{
    // Base condition: All matrix elements have been checked.
    if (index == n * n)
        return 1;

    int i = index / n;
    int j = index % n;

    if (a[i][j] != a[j][i])
        return 0;

    return checkSymmetric(a, n, index + 1);
}

int main()
{
    int a[10][10], n, i, j;

    printf("Enter the order of the square matrix (1-10): ");
    scanf("%d", &n);

    if (n < 1 || n > 10)
    {
        printf("Invalid matrix order.\n");
        return 0;
    }

    printf("Enter the matrix elements row-wise:\n");

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    if (checkSymmetric(a, n, 0))
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}
