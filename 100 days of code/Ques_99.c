/*
Q99 (Strings)

Question:
Change the date format from dd/04/yyyy to dd-Apr-yyyy.
Example:
Input: 24/04/2026
Output: 24-Apr-2026
*/

#include <stdio.h>

int main() {
    int day, month, year;

    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%d/%d/%d", &day, &month, &year);

    if (month == 4) {
        printf("%02d-Apr-%04d", day, year);
    } else {
        printf("Month is not April");
    }

    return 0;
}