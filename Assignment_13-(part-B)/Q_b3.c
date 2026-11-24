
/*
Section B: Pointers with Strings
B3. Comparing Two Strings
*/

#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    char *p1, *p2;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    p1 = str1;
    p2 = str2;

    while(*p1 == *p2 && *p1 != '\0')
    {
        p1++;
        p2++;
    }

    if(*p1 == *p2)
        printf("Strings are equal.");
    else
        printf("Strings are not equal.");

    return 0;
}
