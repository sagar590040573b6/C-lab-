// Question 10: Modular Bank Balance Management

#include <stdio.h>

void deposit(float amount);
void withdraw(float amount);
float getBalance(void);

int main()
{
    printf("Initial bank balance = %.2f\n", getBalance());

    deposit(500.0);

    printf("Balance after deposit = %.2f\n", getBalance());

    withdraw(200.0);

    printf("Balance after withdrawal = %.2f\n", getBalance());

    withdraw(2000.0);

    printf("Final bank balance = %.2f\n", getBalance());

    return 0;
}