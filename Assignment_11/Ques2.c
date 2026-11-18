// Question 2: Block Scope and Shadowing

#include <stdio.h>

int x = 100;

int main()
{
    printf("Global x = %d\n", x);

    {
        int x = 50;

        printf("Local x = %d\n", x);
    }

    printf("Global x after the block = %d\n", x);

    return 0;
}