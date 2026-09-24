#include <stdio.h>
#include <math.h>
// calculate the simple and compound interest
int main()
{
    int p; int r; int t;
    printf("Enter the principal amount: ");
    scanf("%d", &p);
    printf("Enter the rate of interest: ");
    scanf("%d", &r);
    printf("Enter the time period: ");
    scanf("%d", &t);

    float si = (p * r * t) / 100;
    printf("Simple Interest is: %f\n", si);

    float ci = p * pow((1 + (r / 100.0)), t) - p;
    printf("Compound Interest is: %f\n", ci);



    return 0;
}
