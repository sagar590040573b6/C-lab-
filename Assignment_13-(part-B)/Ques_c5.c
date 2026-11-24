
/*
Section C: Pointers to Functions
C5. String Operations Using Function Pointers
*/

#include <stdio.h>

int length(char str[])
{
    int i = 0;

    while(str[i] != '\0' && str[i] != '\n')
    {
        i++;
    }

    return i;
}

void copy(char str1[], char str2[])
{
    int i = 0;

    while(str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }

    str2[i] = '\0';
}

int compare(char str1[], char str2[])
{
    int i = 0;

    while(str1[i] == str2[i] && str1[i] != '\0')
    {
        i++;
    }

    return str1[i] - str2[i];
}

int main()
{
    char str1[100], str2[100], str3[100];
    int choice, result;

    int (*lenPtr)(char[]) = length;
    void (*copyPtr)(char[], char[]) = copy;
    int (*comparePtr)(char[], char[]) = compare;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("1. String Length\n");
    printf("2. String Copy\n");
    printf("3. String Compare\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        result = lenPtr(str1);
        printf("Length = %d", result);
    }
    else if(choice == 2)
    {
        copyPtr(str1, str3);
        printf("Copied string = %s", str3);
    }
    else if(choice == 3)
    {
        printf("Enter second string: ");
        getchar();
        fgets(str2, sizeof(str2), stdin);

        result = comparePtr(str1, str2);

        if(result == 0)
            printf("Strings are equal.");
        else
            printf("Strings are not equal.");
    }
    else
    {
        printf("Invalid choice.");
    }

    return 0;
}
