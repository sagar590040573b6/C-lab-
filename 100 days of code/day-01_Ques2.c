#include<stdio.h>
int main() {

int n;
printf("Enter a number: ");
scanf("%d", &n);
int m;
printf("enter anather number :");
scanf("%d", &m);

int sum = n + m;
int substraction = n - m;
int multiplication = n * m; 
int quotient = n / m;

printf("sum is %d\n", sum);
printf("substraction is %d\n", substraction);
printf("multiplication is %d\n", multiplication);
printf("quotient is %d\n", quotient);

    return 0;
}
