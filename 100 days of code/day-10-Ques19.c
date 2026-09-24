#include<stdio.h>
int main() {

    int side_A, side_B, side_C;
    printf("Enter the three sides of triangle :");
    scanf("%d %d %d", &side_A, &side_B, &side_C);

if(side_A == side_B && side_B == side_C) {
    printf("the triangle is equilateral traingle");
}
else if(side_A == side_B || side_A == side_C || side_B == side_C) {
    printf("the triangle is isoscles triangle");
}
else {
    printf(" the triangle is scalene triangle");
}

    return 0;
}
