#include<stdio.h>
int main() {

int num;
printf("enter a number :");
scanf("%d", &num);

int reverse=0;
int remainder;
int original;

original = num;

while(num > 0) {

    remainder = num % 10;
    reverse = reverse * 10 + remainder;
    num = num / 10;

}
  
 if(reverse == original) {
    printf("%d is palindrome number\n", reverse);
 }
 else {
     printf("%d is not palindrome number\n", reverse);
 }
    return 0;
}