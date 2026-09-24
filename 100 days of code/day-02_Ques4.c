#include<stdio.h>
int main() {

int radius;
printf("enter radius of circel :");
scanf("%d", &radius);

float area;
area = 3.14 * radius * radius ;

float circ;
circ = 2 * 3.14 * radius;

printf("area of circle = %f\n", area);
printf("circumference of circle = %f\n", circ);

    return 0;
}
