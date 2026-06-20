// Arithemtic in C
#include <stdio.h>

int main( void){
    int weight, height ;
    printf("Enter you weight");
    scanf("%f", &weight);
    printf("Enter you height");
    scanf("%f", &weight);
    printf("Your BMI is: %.2f\n", weight/ height);
}