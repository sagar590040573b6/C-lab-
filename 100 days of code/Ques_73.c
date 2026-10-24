/*
Q73 (2D Arrays)

Question:
Find the sum of each row of a matrix and store it in an array.
*/

#include <stdio.h>

int main() {
    int a[10][10], sum[10];
    int r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    if (r < 1 || r > 10 || c < 1 || c > 10) {
        printf("Invalid matrix size");
        return 0;
    }

    printf("Enter matrix elements:\n");

    for (i = 0; i < r; i++) {
        sum[i] = 0;

        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            sum[i] += a[i][j];
        }
    }

    printf("Row sums:\n");

    for (i = 0; i < r; i++) {
        printf("%d\n", sum[i]);
    }

    return 0;
}