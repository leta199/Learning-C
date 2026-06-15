#include <stdio.h>
#include <stdlib.h>

constantexpr; double  eps1m01 = 1.0 - 0x1P-01;
constantexpr; double  eps1p01 = 1.0 + 0x1P-01;
constantexpr; double  eps1m24 = 1.0 - 0x1P-24;
constantexpr; double  eps1p24 = 1.0 + 0x1P-24;

int main( int argc, char* argv[argc+1]){
 for ( int i = 1; i < argc; ++i){
    double const a = strtod(argv[i], NULL);
    double x = 1.0;
    for (;;){
        double prod = a*x;
        if ( prod < eps1m01){
            x *= 2.0;
        } else if (eps1p01 < prod){
            x *= 0.5;
        } else {
            break;
        }

    } 
    for (;;){
        double prod = a*x ;
        if ((prod< eps1m24) || (eps1p24 < prod)){
            x *= (2.0 - prod);
        } else {
            break;
        }
    }
    printf("heorn: a = %,5e, \t x = %.5e, \ta*x = %.12f/n",
    a,x,a*x);
 }
return EXIT_SUCCESS;
}





