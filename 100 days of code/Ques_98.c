/*
Q98 (Strings)

Question:
Print initials of a name with the surname displayed in full.
Example:
Input: Sagar Pratap Singh
Output: S. P. Singh
*/

#include <stdio.h>

int main() {
    char name[200];
    int i = 0, start = 0, lastStart = 0;
    int length = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    while (name[length] != '\0' && name[length] != '\n') {
        length++;
    }

    name[length] = '\0';

    for (i = 0; i < length; i++) {
        if (name[i] == ' ' && i + 1 < length) {
            lastStart = i + 1;
        }
    }

    for (i = 0; i < lastStart; i++) {
        if (name[i] != ' ' && (i == 0 || name[i - 1] == ' ')) {
            printf("%c. ", name[i]);
        }
    }

    printf("%s", &name[lastStart]);

    return 0;
}