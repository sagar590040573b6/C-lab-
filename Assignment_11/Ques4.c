
// Question 4: Function Call Counter Using static


#include<stdio.h>

void countCalls();

int main() {

countCalls();
countCalls();

countCalls();
countCalls();


    return 0;
}

void countCalls() {

    static int count = 0;
    count++;

    printf("count = %d\n", count);

}
