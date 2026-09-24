
#include <stdio.h>

int main() {
    int a, b, hcf;
// hcf of two numbers 
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    hcf = a;

    printf("HCF = %d", hcf);

    return 0;
}