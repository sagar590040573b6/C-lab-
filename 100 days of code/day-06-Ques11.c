
// code 1
#include<stdio.h>
int main() {

 // regular input through the for loop
for(int n; 1;) {

printf("enter a number : ");
scanf("%d", &n);

if(n % 2==0) {
    printf("the number is even\n");
}
 else {
    printf("the number is odd\n");
}

}
    return 0;
}

