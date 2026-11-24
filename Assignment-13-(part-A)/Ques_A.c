// A1. Declaration and Dereferencing of a Pointer

#include <stdio.h>

int main()
{
    int a = 10;
    int *p;

    p = &a;

    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", (void *)&a);
    printf("Pointer value = %p\n", (void *)p);
    printf("Dereferenced value = %d\n", *p);

    return 0;
}