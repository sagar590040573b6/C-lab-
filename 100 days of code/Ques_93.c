/*
Q93 (Strings)

Question:
Check if two strings are anagrams of each other.
This program ignores spaces and letter case.
*/

#include <stdio.h>

int main() {
    char a[200], b[200];
    int freq[256] = {0};
    int i, anagram = 1;

    printf("Enter first string: ");
    fgets(a, sizeof(a), stdin);

    printf("Enter second string: ");
    fgets(b, sizeof(b), stdin);

    for (i = 0; a[i] != '\0' && a[i] != '\n'; i++) {
        if (a[i] != ' ') {
            char ch = a[i];

            if (ch >= 'A' && ch <= 'Z') {
                ch += 32;
            }

            freq[(unsigned char)ch]++;
        }
    }

    for (i = 0; b[i] != '\0' && b[i] != '\n'; i++) {
        if (b[i] != ' ') {
            char ch = b[i];

            if (ch >= 'A' && ch <= 'Z') {
                ch += 32;
            }

            freq[(unsigned char)ch]--;
        }
    }

    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            anagram = 0;
            break;
        }
    }

    if (anagram) {
        printf("Strings are anagrams");
    } else {
        printf("Strings are not anagrams");
    }

    return 0;
}