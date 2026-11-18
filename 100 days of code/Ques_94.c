/*
Q94 (Strings)

Question:
Find the longest word in a sentence.
*/

#include <stdio.h>

int main() {
    char str[300], word[100];
    int i = 0, j = 0, max = 0, start = 0;
    int longestStart = 0, longestLength = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] != ' ' && str[i] != '\n' &&
            str[i] != '\0' && str[i] != '\t') {
            if (j == 0) {
                start = i;
            }
            j++;
        } else {
            if (j > max) {
                max = j;
                longestStart = start;
                longestLength = j;
            }

            j = 0;
        }

        if (str[i] == '\0' || str[i] == '\n') {
            break;
        }

        i++;
    }

    printf("Longest word: ");

    for (i = longestStart; i < longestStart + longestLength; i++) {
        printf("%c", str[i]);
    }

    return 0;
}