/*Q48: Write a program to print the following pattern:
1
12
123
1234
12345 */

#include <stdio.h>
int main()
{
    // Declare loop variables
    int i, j;               

    // Outer loop controls the number of rows
    for (i = 1; i <= 5; i++)
    {
        // Inner loop prints numbers in each row
        for (j = 1; j <= i; j++)
        {
            printf("%d", j); // Print the current number
        }
        printf("\n"); // Move to the next line after printing one row
    }
    return 0; // End of program
}