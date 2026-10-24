/*Q47: Write a program to print the following pattern:
*
**
***
****
***** */

#include <stdio.h>
int main()
{
    // Declare loop variables
    int i,j;

    // Outer loop controls the number of rows
    for (i = 1; i <= 5; i++)
    {
        // Inner loop prints stars in each row
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n"); // Move to the next line after printing one row
    }
    return 0; // End of program
}