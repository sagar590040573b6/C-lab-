#include <stdio.h>

int main() {
    int rows1, columns1, rows2, columns2;
    int matrix1[100][100], matrix2[100][100], product[100][100];
    int i, j, k;

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

    // Matrix multiplication is possible only when
    // columns of first matrix = rows of second matrix
    if (columns1 != rows2) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < columns2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Initialize product matrix
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < columns2; j++) {
            product[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < columns2; j++) {
            for (k = 0; k < columns1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("\nProduct of the matrices:\n");

    for (i = 0; i < rows1; i++) {
        for (j = 0; j < columns2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}