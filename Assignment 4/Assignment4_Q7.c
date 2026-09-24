 #include <stdio.h>

int main()
{
    int a;

    printf("Enter a value: ");
    scanf("%d", &a);

    printf("\nInitial value of a = %d\n", a);

    printf("++a = %d\n", ++a);

    printf("a++ = %d\n", a++);
    printf("Value after a++ = %d\n", a);

    printf("--a = %d\n", --a);

    printf("a-- = %d\n", a--);
    printf("Value after a-- = %d\n", a);

    return 0;
}
