#include <stdio.h>

int main() {
    int num, original, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    printf("reverse = %d\n", reverse);

    if(original == reverse) {
        printf("%d is palindrome number", reverse);  
    }
    else {
        printf("%d is not a palindrome number", reverse);
    }
    return 0;
}  
