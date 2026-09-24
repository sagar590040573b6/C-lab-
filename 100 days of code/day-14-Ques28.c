#include<stdio.h>
int main() {

int n;
printf("enter the number ");
scanf("%d", &n);

int product = 1;
for(int i=2; i<=n; i= i+2) {
    printf("%d\n", i);
    product = product * i;
}
printf("product of n even numbers from 1 to %d is  = %d\n", n, product);

    return 0;
}
