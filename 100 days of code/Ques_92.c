/*
Q92 (Strings)

Question:
Find the first repeating lowercase alphabet in a string.
*/

#include <stdio.h>

int main() {
    char str[200];
    int seen[26] = {0};
    int i, found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';

            if (seen[index]) {
                printf("First repeating character = %c", str[i]);
                found = 1;
                break;
            }

            seen[index] = 1;
        }
    }

    if (!found) {
        printf("No repeating lowercase alphabet");
    }

    return 0;
}