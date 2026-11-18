/*
Q78 (2D Arrays)

Question:
Find the sum of main diagonal elements for a square matrix.
*/

#include <stdio.h>

int main() {
    int a[10][10], n, i, j, sum = 0;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    if (n < 1 || n > 10) {
        printf("Invalid matrix size");
        return 0;
    }

    printf("Enter matrix elements:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);

            if (i == j) {
                sum += a[i][j];
            }
        }
    }

    printf("Sum of main diagonal = %d", sum);

    return 0;
}