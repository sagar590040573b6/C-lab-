#include<stdio.h>
int main() {
// grading the marks 
    int marks; // marks o-100 
    printf("enter the marks :");
    scanf("%d", &marks);

    if (marks > 90) {
        printf("A grade");
    }
    else if (marks > 80) {
        printf("B grade");
    }
    else if (marks > 70) {
        printf("C grade");
    }
    else if (marks > 60) {
        printf("D grade");
    }
    else if (marks > 50) {
        printf("E grade");
    }
    else {
        printf("F grade");
    }


    return 0;
}
