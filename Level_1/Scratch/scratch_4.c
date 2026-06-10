// While loops - Heron approximation

#include <tgmath.h>
#include <stdio.h>

int main(void) {

double  eps = 1E-9;// level of precision 
double const a = 0.01;
double x = 0.5;
int counter = 0;

while ( fabs(1.0 - a*x) >= eps) {
x *= (2.0 - a*x); 
printf("The value of 1/x is: %f, on iteration: %d.\n", x, counter);
++ counter;
}}


