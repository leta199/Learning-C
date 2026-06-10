// While loops - Heron approximation

#include <tgmath.h>

int main() {
double  F = 1E-9;
double const a = 34.0;
double x = 0.5;

while ( fabs(1.0 - a*x) >= F) {
x *= (2.0 - a*x);
}}


