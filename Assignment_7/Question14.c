#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[100][100];
    int mainDiagonalSum = 0;
    int secondaryDiagonalSum = 0;
    int upperTriangular = 1;
    int lowerTriangular = 1;
    int diagonal = 1;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate diagonal sums
    for (i = 0; i < n; i++) {
        mainDiagonalSum += matrix[i][i];
        secondaryDiagonalSum += matrix[i][n - 1 - i];
    }

    // Check matrix types
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {

            // Upper triangular: elements below main diagonal are 0
            if (i > j && matrix[i][j] != 0) {
                upperTriangular = 0;
            }

            // Lower triangular: elements above main diagonal are 0
            if (i < j && matrix[i][j] != 0) {
                lowerTriangular = 0;
            }

            // Diagonal: all non-diagonal elements are 0
            if (i != j && matrix[i][j] != 0) {
                diagonal = 0;
            }
        }
    }

    printf("\nMain diagonal sum = %d\n", mainDiagonalSum);
    printf("Secondary diagonal sum = %d\n", secondaryDiagonalSum);

    if (diagonal) {
        printf("The matrix is a diagonal matrix.\n");
    }
    else if (upperTriangular) {
        printf("The matrix is an upper triangular matrix.\n");
    }
    else if (lowerTriangular) {
        printf("The matrix is a lower triangular matrix.\n");
    }
    else {
        printf("The matrix is none of these.\n");
    }

    return 0;
}