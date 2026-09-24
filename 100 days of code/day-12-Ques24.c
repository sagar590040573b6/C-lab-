#include<stdio.h>
int main() {
// programe for calculating the electric bill;

int units;
printf("enter number of units :");
int u = units;
scanf("%d", &u);
int bill;

if(u <= 100) {
  bill = u * 5;
  printf("the number of units is %d\n", u);
  printf("electric bill is %d\n", bill);
}
else if(u > 100 && u <= 200) {
    bill = (100*5) + (u - 100)*7;
    printf("the number of units is %d\n", u);
    printf("electric bill is rs %d\n", bill);
}
else if(u > 200 && u <= 300) {
    bill = (100*5) + (100*7) + (u-200)* 10;
    printf("the number of units is %d\n", u);
    printf("electric bill is rs %d\n", bill);
}
else {
    bill = (100*5) + (100*7) + (100*10) + (u-300)*12;
    printf("the number of units is %d\n", u);
    printf("electric bill is rs %d\n", bill);
}
    return 0;
}
