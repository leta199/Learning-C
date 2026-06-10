// While loops - Heron approximation

#include <tgmath.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {

// Initialised variables 
double  eps = 1E-9;// level of precision 
double const a = 0.01; // denomiantor
double x = 0.5; // random guess to start 
int counter = 0; // track number of iterations 

while ( fabs(1.0 - a*x) >= eps) { // tracks whether or not 1- a*x is greater than or equal to eps
x *= (2.0 - a*x); 
printf("The value of 1/a is: %f, on iteration: %d.\n", x, counter);
++ counter; // iterate on our counter 
}
return EXIT_SUCCESS; }


