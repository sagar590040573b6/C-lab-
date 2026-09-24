#include <stdio.h>

int main() {
    int rows1, columns1, rows2, columns2;
    int matrix1[100][100], matrix2[100][100], sum[100][100];
    int i, j;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &columns1);

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < columns1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &columns2);

    if (rows1 != rows2 || columns1 != columns2) {
        printf("Matrix addition is not possible because the orders are different.\n");
        return 0;
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < columns2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Add the two matrices
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < columns1; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("\nSum of the matrices:\n");

    for (i = 0; i < rows1; i++) {
        for (j = 0; j < columns1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}