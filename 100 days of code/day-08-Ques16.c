#include<stdio.h>
int main() {
// largest of three numbers :

int a; int b; int c;
printf("enter three numbers :");
scanf("%d %d %d", &a, &b, &c);

if(a > b && a > c) {
    printf("a = %d is largest of three numbers", a);
}
else if(b > a && b > c) {
    printf("b = %d is largest of three numbers", b);
}
else {
    printf("c = %d is largest of three numbers ", c);
}

    return 0;
}
