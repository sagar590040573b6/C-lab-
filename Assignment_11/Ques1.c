// Question 1: Automatic Local Variables

#include <stdio.h>


void display() {
    auto int x = 25;
    printf("outside inner block = %d\n", x);
}


int main()
{

    auto int x = 25;
    printf("outside the inner vlock = %d\n", x);

    printf("Entering the first block:\n");

    {
        auto int x = 10;
        printf("Value of x inside the first block = %d\n", x);
    }

    printf("\nEntering the second block:\n");

    {
        auto int x = 20;
        printf("Value of x inside the second block = %d\n", x);
    }
printf("\n");

    display();

    return 0;
}