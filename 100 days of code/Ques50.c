/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    * */

#include <stdio.h>
int main()
{
    // Declare loop variables
    int i, j;
    
    for (i = 5; i >= 1; i--)
    {
        // Print asterisks in each row
        for (j = 1; j <= i; j++)
        {
            printf("*"); // printing asterisk
        }
        printf("\n"); // Move to the next line after printing one row
    }
    return 0; // End of program
}