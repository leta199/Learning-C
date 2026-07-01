// How to use fractions in standard I/O 

#include <stdio.h>

int main(void)
{
// declarations 
    int numerator1, numerator2, denominator1, denominator2, new_denominator, new_numerator;

// calculations 
    printf("Please enter what fractions you want to add: ");
    scanf("%d /%d +%d /%d", &numerator1,&denominator1, &numerator2,&denominator2);
    
    new_denominator = denominator1 * denominator2;
    new_numerator = numerator1 * denominator2 + numerator2 * denominator1;
// final print 
    printf("The result is: %d/%d\n", new_numerator, new_denominator);

return 0;

}