#include<stdio.h>
int main() {

int n;
printf("enter a number :");
scanf("%d", &n);

printf("fabonacci series :\n");

int a=0; int b=1; int c;

for(int i=1; i<=n; i++) {
printf("fab%d = %d\n", i, a);
c = a + b;
a = b;
b = c;

}
    return 0;
}

