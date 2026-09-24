#include<stdio.h>
int main() {
// program to find profit and loss and also their percentage ;

float cp;
printf("enter the cost of product:");
scanf("%f", &cp);
float sp;
printf("enter the sellind price of product:");
scanf("%f", &sp);

if(cp > sp) {
    printf("the product is sold at loss\n");
    float loss = cp - sp;
    float loss_percentage = (loss/cp) * 100;
    printf("the loss on the product is %f\n", loss);
    printf("the loss percentage is %.2f", loss_percentage);
}
else if(sp>cp) {
    printf("the product is sold at the profite\n");
    float profite = sp-cp;
    float profite_percentage = (profite/cp) * 100;
    printf("the profite on the product is %f and the profite percentage is %.2f", profite, profite_percentage);
}   
else {
    printf("the product is sold at no loss and no profite\n");
}


    return 0;

}
