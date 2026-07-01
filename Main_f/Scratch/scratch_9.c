// How to use fractions in standard I/O 

#include <stdio.h>

int main(void)
{
// declarations 
    int numerator1, numerator2, denominator1, denominator2;

// calculations 
    printf("Please enter what fractions you want to add:\n");
    scanf("%d /%d +%d /%d", &numerator1, &numerator2, &denominator1, &denominator2);
    
    int new_denominator denominator1*denominator2;
    

return 0;
}