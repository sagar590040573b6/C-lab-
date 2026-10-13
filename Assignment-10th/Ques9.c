
#include <stdio.h>

int a[10][10], rows, cols;

int columnSum(int col, int row)
{
    // Base condition: All rows of the current column are processed.
    if (row == rows)
        return 0;

    return a[row][col] + columnSum(col, row + 1);
}

int findMinimumColumn(int col, int minCol, int minSum)
{
    // Base condition: All columns have been checked.
    if (col == cols)
        return minCol;

    int sum = columnSum(col, 0);

    if (sum < minSum)
    {
        minSum = sum;
        minCol = col;
    }

    return findMinimumColumn(col + 1, minCol, minSum);
}

int main()
{
    int i, j, minCol;

    printf("Enter rows and columns (1-10): ");
    scanf("%d %d", &rows, &cols);

    if (rows < 1 || rows > 10 || cols < 1 || cols > 10)
    {
        printf("Invalid matrix dimensions.\n");
        return 0;
    }

    printf("Enter matrix elements row-wise:\n");

    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);

    minCol = findMinimumColumn(1, 0, columnSum(0, 0));

    printf("Column with minimum sum = %d\n", minCol + 1);
    printf("Minimum column sum = %d\n", columnSum(minCol, 0));

    return 0;
}
