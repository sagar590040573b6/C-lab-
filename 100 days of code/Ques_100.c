/*
Q100 (Strings)

Question:
Print all sub-strings of a string.
*/

#include <stdio.h>

int main() {
    char str[200];
    int i, j, k, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    printf("All substrings:\n");

    for (i = 0; i < length; i++) {
        for (j = i; j < length; j++) {
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }

            printf("\n");
        }
    }

    return 0;
}