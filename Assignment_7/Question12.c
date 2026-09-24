#include <stdio.h>

int main() {
    int m, n;
    int matrix[100][100];
    int i, j;
    int rowSum, columnSum;

    printf("Enter the number of rows: ");
    scanf("%d", &m);

    printf("Enter the number of columns: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nRow-wise sums:\n");

    for (i = 0; i < m; i++) {
        rowSum = 0;

        for (j = 0; j < n; j++) {
            rowSum += matrix[i][j];
        }

        printf("Sum of Row %d = %d\n", i + 1, rowSum);
    }

    printf("\nColumn-wise sums:\n");

    for (j = 0; j < n; j++) {
        columnSum = 0;

        for (i = 0; i < m; i++) {
            columnSum += matrix[i][j];
        }

        printf("Sum of Column %d = %d\n", j + 1, columnSum);
    }

    return 0;
}