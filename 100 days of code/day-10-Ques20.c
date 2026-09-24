#include<stdio.h>
int main() {

// this program print the day of the week using switch case by entering the number(1-7) and

int number; // number(1-7)
printf("Enter the number(1-7) :");
scanf("%d", &number);
// 1-monday, 2-tuesday, 3-wednesday, 4-thursaday, 5-friday, 6-saturday, 7-sunday;

switch(number) {
case 1:
printf("the day is monday");
break;
case 2: 
printf("the day is tuesday");
break;
case 3:
printf("the day is wednesday");
break;
case 4:
printf("the day is thursday");
break;
case 5:
printf("the day is friday");
break;
case 6:
printf("the day is saturday");
break;
case 7:
printf("the day is sunday");
break;

}

    return 0;
}
