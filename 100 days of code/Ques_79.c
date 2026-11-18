/*
Q79 (2D Arrays)

Question:
Perform diagonal traversal of a matrix.

This program traverses diagonals starting from the top-left
and prints each diagonal in the top-right to bottom-left direction.
*/

#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j, d;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    if (r < 1 || r > 10 || c < 1 || c > 10) {
        printf("Invalid matrix size");
        return 0;
    }

    printf("Enter matrix elements:\n");

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal traversal: ");

    for (d = 0; d < r + c - 1; d++) {
        for (i = 0; i < r; i++) {
            j = d - i;

            if (j >= 0 && j < c) {
                printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}