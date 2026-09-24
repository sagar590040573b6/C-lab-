#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[100][100], transpose[100][100];
    int symmetric = 1, skewSymmetric = 1;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find transpose
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    printf("\nTranspose of the matrix:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    // Check symmetric and skew-symmetric
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {

            if (matrix[i][j] != transpose[i][j]) {
                symmetric = 0;
            }

            if (matrix[i][j] != -transpose[i][j]) {
                skewSymmetric = 0;
            }
        }
    }

    if (symmetric) {
        printf("\nThe matrix is symmetric.\n");
    } 
    else if (skewSymmetric) {
        printf("\nThe matrix is skew-symmetric.\n");
    } 
    else {
        printf("\nThe matrix is neither symmetric nor skew-symmetric.\n");
    }

    return 0;
}