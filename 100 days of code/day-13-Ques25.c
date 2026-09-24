#include<stdio.h>
int main() {

// program to impliment basic calculator using switch break;

int a; int b;
printf("enter two numbers :");
scanf("%d %d", &a, &b);
int op;
printf("enter a operator(+ , -, /, *, %)"); // 1 for +, 2 for -, 3 for /, 4 for *, 5 for %
scanf("%d", &op);
int sum; int subs; int multiplication; int division; int modulus;
switch(op) {
case 1: 
     sum = a+b;
    printf("result = %d\n", sum);
 break;
case 2:
subs = a-b;
printf("result = %d\n", subs);
break;
case 3: if(b != 0) {
division = a/b;
printf("result = %d\n", division);
}
else {
    printf("error! division by zero not allowed");
} break;
case 4:
multiplication = a*b;
printf("result = %d\n", multiplication );
break;
case 5: if(b != 0) {
 modulus = a%b;
printf("result = %d\n", modulus);
}
else {
    printf("error! modulus by zero not allowed");
} break;
default :
printf("invalid input");
}

    return 0;
}
