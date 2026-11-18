// Question 9: Modifying a Global Variable Using extern

#include <stdio.h>

int number = 10;

void modify();

int main()
{
    printf("Value before modification = %d\n", number);

    modify();

    printf("Value after modification = %d\n", number);

    return 0;
}
