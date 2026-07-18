// Tax Calculator - Federal income tax rate USA

#include <stdio.h>
#define TAXRATE_1 0.1 /* to easily change tax rates in the future*/
#define TAXRATE_2 0.12
#define TAXRATE_3 0.22
#define TAXRATE_4 0.24
#define TAXRATE_5 0.32
#define TAXRATE_6 0.35
#define TAXRATE_7 0.37

int main(void) 
{

float taxable_income;
float  total_tax = 0;
printf("What is your total compensation in US$: ");
scanf("%f", &taxable_income);

if (taxable_income >= 626351){
    total_tax += (taxable_income - 626351)*TAXRATE_7;
}
else if (taxable_income >= 250526 && taxable_income <= 626350) {
    total_tax += (taxable_income - 250526) * TAXRATE_6;
}
else if (taxable_income >= 197301 && taxable_income <= 250525) {
    total_tax += (taxable_income - 197301) * TAXRATE_5;
}
else if (taxable_income >= 103351 && taxable_income <= 197300) {
    total_tax += (taxable_income - 103351) * TAXRATE_4;
}
else if (taxable_income >= 48476 && taxable_income <= 103350) {
    total_tax += (taxable_income - 48476) * TAXRATE_3;
}
else if (taxable_income >= 11926 && taxable_income <= 48475) {
    total_tax += (taxable_income - 11926) * TAXRATE_2;
}
else if (taxable_income <= 11925) {
    total_tax += (taxable_income - 11925) * TAXRATE_1;
}

printf("On a compensation of %.2f\nYour total tax is: %.2f\n", taxable_income, total_tax);

return 0;
}




