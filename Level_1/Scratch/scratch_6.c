// Arithemtic in C
#include <stdio.h>

int main( void){
    
float weight, height;

    printf("Enter you weight (in kg): ");
    scanf("%f", & weight);
    printf("Enter you height (in m): ");
    scanf("%f", & height);
    printf("Your BMI is: %.2f\n", weight/(height*height));
}