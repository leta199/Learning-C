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

float cash_income, total_tax;
printf("What is your total compensation in US$: ");
scanf("%f", & cash_income);

if (cash_income >= 11925)
; 
float tax_amount1 = 11925 * TAXRATE_1;

if (cash_income >= 48475)
;
float tax_amount2 = (48475 - 11925) * TAXRATE_2;

if (cash_income  >= 103350)
;
float tax_amount3 = (103350 - 48475) * TAXRATE_3;

if (cash_income  >= 197300)
;
float tax_amount4 = (197300 - 103350) * TAXRATE_4;

if (cash_income  >= 250525)
;
float tax_amount5 = (250525 - 197300) * TAXRATE_5;

if (cash_income  >= 626350)
;
float tax_amount6 = (626350 - 250525) * TAXRATE_6;

if (cash_income  > 626351)
;
float tax_amount7 = (626351 - cash_income) * TAXRATE_7;


printf("On a compensation of %.2f\nYour total tax is: %.2f\n", cash_income,
tax_amount1 + tax_amount2 + tax_amount3 + tax_amount4 + tax_amount5 + tax_amount6 + tax_amount7);

return 0;
}




