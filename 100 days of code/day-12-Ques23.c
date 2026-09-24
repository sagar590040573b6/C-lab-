#include<stdio.h>
int main() {
//programe for calculating the fine for library books returned late;

int days;
int n = days;
printf("enter the number of days late :");
scanf("%d", &n);
int fine;
if(n <= 5) {
    fine = n * 2;
    printf("number of days late = %d", n);
    printf("\nlibrary fine is %d\n", fine);
}
else if(n > 5 && n <=10) {
    fine = (5 * 2) + (n - 5) * 4;
    printf("number of days late = %d", n);
    printf("\nlibrary fine is %d\n", fine);
}
else if(n > 10 && n <= 30) {
    fine = (5*2) + (5*4) + (n - 10)* 6;
    printf("number of days late = %d", n);
    printf("\nlibrary fine is %d\n", fine);
}
else {
    printf("number of days late is more than 30 days\n");
    printf("and hence membership cancelled ");
}
    return 0;
}
