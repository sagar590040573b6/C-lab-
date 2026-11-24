/*
Section A: Pointers with Arrays
A2. Row and Column Sum of Matrix
*/

#include <stdio.h>

int main()
{
    int a[10][10];
    int r, c, i, j, sum;
    int *p;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    if(r < 1 || r > 10 || c < 1 || c > 10)
    {
        printf("Invalid matrix size.");
        return 0;
    }

    printf("Enter matrix elements:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    p = &a[0][0];

    printf("\nRow sums:\n");

    for(i = 0; i < r; i++)
    {
        sum = 0;

        for(j = 0; j < c; j++)
        {
            sum = sum + *(p + i * 10 + j);
        }

        printf("Row %d = %d\n", i + 1, sum);
    }

    printf("\nColumn sums:\n");

    for(j = 0; j < c; j++)
    {
        sum = 0;

        for(i = 0; i < r; i++)
        {
            sum = sum + *(p + i * 10 + j);
        }

        printf("Column %d = %d\n", j + 1, sum);
    }

    return 0;
}