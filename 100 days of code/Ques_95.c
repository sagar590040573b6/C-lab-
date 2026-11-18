/*
Q95 (Strings)

Question:
Check if one string is a rotation of another.
*/

#include <stdio.h>

int main() {
    char a[200], b[200], doubled[400];
    int i = 0, j, lenA = 0, lenB = 0, found = 0;

    printf("Enter first string: ");
    fgets(a, sizeof(a), stdin);

    printf("Enter second string: ");
    fgets(b, sizeof(b), stdin);

    while (a[lenA] != '\0' && a[lenA] != '\n') {
        lenA++;
    }

    while (b[lenB] != '\0' && b[lenB] != '\n') {
        lenB++;
    }

    a[lenA] = '\0';
    b[lenB] = '\0';

    if (lenA != lenB) {
        printf("Strings are not rotations");
        return 0;
    }

    for (i = 0; i < lenA; i++) {
        doubled[i] = a[i];
    }

    for (i = 0; i < lenA; i++) {
        doubled[lenA + i] = a[i];
    }

    doubled[2 * lenA] = '\0';

    for (i = 0; i <= lenA; i++) {
        for (j = 0; j < lenB; j++) {
            if (doubled[i + j] != b[j]) {
                break;
            }
        }

        if (j == lenB) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Strings are rotations");
    } else {
        printf("Strings are not rotations");
    }

    return 0;
}