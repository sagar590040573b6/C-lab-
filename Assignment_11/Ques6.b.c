// Question 6: Accessing a Static Global Variable
// Attempt to access a static global variable from another file.

#include <stdio.h>

extern int num;

void test()
{
    printf("Value of num = %d\n", num);
}