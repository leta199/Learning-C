// While loops - Heron approximation

#include <tgmath.h>
#include <stdio.h>

int main(void) {

double  F = 1E-9;// level of precision 
double const a = 34.0;
double x = 0.5;
int counter = 0;

while ( fabs(1.0 - a*x) >= F) {
x *= (2.0 - a*x); 
printf("The value of x is: %f, on iteration: %d.\n", x, counter);
++ counter;
}}


