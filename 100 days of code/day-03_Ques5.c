#include<stdio.h>
int main() {

    float cels;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &cels);

    float fahr = (cels * 9 / 5) + 32;
    printf("Temperature in Fahrenheit is %f\n", fahr); 


    return 0;
}
