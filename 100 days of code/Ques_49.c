/*Q49: Write a program to print the following pattern:
5
45
345
2345
12345 */

#include <stdio.h>
int main()
{
    // Declare loop variables
    int i, j;               

    // Outer loop controls the number of rows
    for (i = 5; i >= 1; i--)
    {
        // Inner loop prints numbers in each row
        for (j = i; j <= 5; j++)
        {
            printf("%d", j); // Print the current number
        }
        printf("\n"); // Move to the next line after printing one row
    }
    return 0; // End of program
}