/*
Q91 (Strings)

Question:
Remove all vowels from a string.
*/

#include <stdio.h>

int main() {
    char str[200], result[200], ch;
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        ch = str[i];

        if (ch >= 'A' && ch <= 'Z') {
            ch += 32;
        }

        if (ch != 'a' && ch != 'e' && ch != 'i' &&
            ch != 'o' && ch != 'u') {
            result[j++] = str[i];
        }

        i++;
    }

    result[j] = '\0';

    printf("String without vowels: %s", result);

    return 0;
}