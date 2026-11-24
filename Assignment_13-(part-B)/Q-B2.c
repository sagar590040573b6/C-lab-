
/*
Section B: Pointers with Strings
B2. Copying a String
*/

#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    char *p1, *p2;

    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);

    p1 = str1;
    p2 = str2;

    while(*p1 != '\0')
    {
        *p2 = *p1;
        p1++;
        p2++;
    }

    *p2 = '\0';

    printf("Copied string = %s", str2);

    return 0;
}
