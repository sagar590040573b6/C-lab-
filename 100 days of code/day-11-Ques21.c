#include<stdio.h>
int main() {

// this program show the month name and the number od days in that month usind switch case method;
int number; // number(1-12)
printf("enter th number(1-12) :");
scanf("%d", &number);

// 1-jan, 2-feb, 3-mar, 4-apr, 5-may, 6-june, 7-july, 8-aug, 9-sep, 10-oct, 11-nov, 12-dec;

switch(number) {

case 1:
printf("the month is january\n");
printf("the number of days in january is 31");
break;
case 2:
printf("the month is febuary\n");
printf("the number of days in febuary is 28");
break;
case 3:
printf("the month is march\n");
printf("the number of days in march is 31");
break;
case 4:
printf("the month is april\n");
printf("the number of days in april is 30");
break;
case 5:
printf("the month is may\n");
printf("the number of days in may is 31");
break;
case 6:
printf("the month is june \n");
printf("the number od days in june is 30");
break;
case 7:
printf("the month is july\n");
printf("the number of days in july is 31");
break;
case 8:
printf("the month is august\n");
printf("the number of days in august is 31");
break;
case 9:
printf("the month is september\n");
printf("the number of days in september is 30");
break;
case 10:
printf("the month is october\n");
printf("the number of days in this month is 31");
break;
case 11:
printf("the month is november \n");
printf("the number of days in this month is 30");
break;
case 12:
printf("the month is december \n");
printf("the number of days in this month is 31");
break;
}
    return 0;
}
