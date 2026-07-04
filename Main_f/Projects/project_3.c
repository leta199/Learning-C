// Calculating a UPC check digit 

#include <stdio.h>

int main(void)
{
// Declaring all variables required 
int digit1, digit2, digit3, digit4, digit5, digit6, digit7,
    digit8, digit9, digit10, digit11;

// Requesting necessary 10 digits 
printf("Please etner your 11 digits: ");
scanf("%d%d%d%d%d%d%d%d%d%d%d", digit1, digit2, digit3, digit4, digit5, digit6, digit7,
          digit8, digit9, digit10, digit11);

//Do required calculations 
int firstsum = digit1 + digit3 + digit5 + digit7 + digit9 + digit11;

}