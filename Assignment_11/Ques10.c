// Question 10: Modular Bank Balance Management

#include <stdio.h>

static float balance = 1000.0;

void deposit(float amount)
{
    if (amount > 0)
    {
        balance = balance + amount;
        printf("Amount deposited = %.2f\n", amount);
    }
    else
    {
        printf("Invalid deposit amount\n");
    }
}

void withdraw(float amount)
{
    if (amount <= 0)
    {
        printf("Invalid withdrawal amount\n");
    }
    else if (amount <= balance)
    {
        balance = balance - amount;
        printf("Amount withdrawn = %.2f\n", amount);
    }
    else
    {
        printf("Insufficient balance\n");
    }
}

float getBalance()
{
    return balance;
}