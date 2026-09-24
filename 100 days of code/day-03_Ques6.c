#include<stdio.h>
int main() {

int a, b;
printf("enter two numbers :");
scanf("%d" "%d", &a ,&b);

printf("without swaping\n");
printf("a = %d\n", a);
printf("b = %d\n", b);

int c;
c = a;
a = b;
b = c;

printf("after swaping\n");
printf("a = %d\n", a);
printf("b = %d\n", b);

return 0;
}
