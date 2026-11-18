/*
Q77 (2D Arrays)

Question:
Check if the elements on the diagonal of a matrix are distinct.
This program checks the main diagonal.
*/

#include <stdio.h>

int main() {
    int a[10][10], n, i, j, distinct = 1;

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
        }
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i][i] == a[j][j]) {
                distinct = 0;
                break;
            }
        }

        if (!distinct) {
            break;
        }
    }

    if (distinct) {
        printf("Diagonal elements are distinct");
    } else {
        printf("Diagonal elements are not distinct");
    }

    return 0;
}