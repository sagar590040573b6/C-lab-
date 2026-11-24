
/* B4. Bit-field versus Ordinary Structure
   Compare the size of an ordinary structure
   and a bit-field structure.
*/

#include <stdio.h>

struct Normal
{
    unsigned int flag1;
    unsigned int flag2;
    unsigned int flag3;
    unsigned int flag4;
};

struct BitField
{
    unsigned int flag1 : 1;
    unsigned int flag2 : 1;
    unsigned int flag3 : 1;
    unsigned int flag4 : 1;
};

int main()
{
    printf("--- Structure Size Comparison ---");

    printf("\nSize of Normal Structure: %zu bytes",
           sizeof(struct Normal));

    printf("\nSize of Bit-field Structure: %zu bytes",
           sizeof(struct BitField));

    return 0;
}

/*
Note:
Normal structure uses ordinary unsigned int members.
Bit-field structure uses only one bit for each field.

The actual size depends on the compiler,
system and memory alignment.
*/
