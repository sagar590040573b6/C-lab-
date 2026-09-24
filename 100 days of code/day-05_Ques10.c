#include<stdio.h>
int main() {
// convert time in hours, minutes and seconds to seconds

int sec;
printf("enter total seconds : ");
scanf("%d", &sec);

int hours = sec/3600;
int minutes = (sec%3600)/60;
int seconds = (sec%3600)%60;

printf("time = %d", hours);
printf(":%d", minutes);
printf(":%d", seconds);

    return 0;
}
