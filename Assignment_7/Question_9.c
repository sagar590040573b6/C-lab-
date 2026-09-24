#include <stdio.h>

int main() {
    int rows, columns;
    int matrix[100][100];
    int i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    printf("Enter the elements of the matrix:\n");

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMatrix:\n");

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}