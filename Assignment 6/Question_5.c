#include<stdio.h>
int main() {
int prime_number = 0;
int lower, upper;
printf("enter lower and upper limit :");
scanf("%d %d", &lower, &upper);

if(upper < lower) {
    int temp;
    temp = upper;
    upper = lower;
    lower = temp;
}
printf("the prime numbers between %d and %d is\n", lower, upper);
int isprime;
for(int i = lower; i < upper; i++) {
       isprime = 1;
    for(int count = 2; count < i; count ++) {
        if(i % count == 0) {
        isprime = 0;
        break;
    }
    }
    if(isprime) {
    printf("%d\n", i);
    prime_number ++;
} 
}
printf("total number of prime number is %d\n", prime_number);
    return 0;
}
