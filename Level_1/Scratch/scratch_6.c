// Arithemtic in C
#include <stdio.h>

int main( void){
// declare and define variables    
float weight, height;
// printing instruction for user and intialising variables 
    printf("Enter you weight (in kg): ");
    scanf("%f", & weight);
    printf("Enter you height (in m): ");
    scanf("%f", & height);
// final calucation and display
    printf("Your BMI is: %.2f\n", weight/(height*height));
}