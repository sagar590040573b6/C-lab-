
/*
Section B: Pointers with Strings
B1. Length of a String
*/

#include <stdio.h>

int main()
{
    char str[100];
    char *p;
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    p = str;

    while(*p != '\0' && *p != '\n')
    {
        length++;
        p++;
    }

    printf("Length = %d\n", length);

    return 0;
}
