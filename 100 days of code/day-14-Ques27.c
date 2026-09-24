#include<stdio.h>
int main() {

int n;
printf("enter the value for n :");
scanf("%d", &n);
int sum = 0;
int i=1;
do{
    printf("%d\n", i);
    sum = sum + i;
    i=i+2;
}
while(i<n);
printf("sum = %d\n", sum);

    return 0;
}
