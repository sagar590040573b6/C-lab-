
#include <stdio.h>

void towerOfHanoi(int n, char source,
                  char auxiliary, char destination)
{
    // Base condition: Move the single disk directly to its destination.
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n",
               source, destination);
        return;
    }

    towerOfHanoi(n - 1, source, destination, auxiliary);

    printf("Move disk %d from %c to %c\n",
           n, source, destination);

    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main()
{
    int n;

    printf("Enter the number of disks (1-10): ");
    scanf("%d", &n);

    if (n < 1 || n > 10)
    {
        printf("Please enter a number between 1 and 10.\n");
        return 0;
    }

    printf("Steps to solve Tower of Hanoi:\n");

    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}
