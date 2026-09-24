#include<stdio.h>
int main() {

float l;
printf("Enter the length of the rectangle: ");
scanf("%f", &l);

float b;
printf("Enter the breadth of the rectangle: "); 
scanf("%f", &b);

float area = l * b;
float perimeter = 2 * (l + b);

printf("area of rectangle is %f\n", area);
printf("perimeter of rectangle is %f\n", perimeter);

    return 0;
}
