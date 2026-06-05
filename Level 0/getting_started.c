/* Getting started in C */
#include <stdio.h>
#include <stdlib.h>

/* Main function */
int main (int argc, [[maybe_unused]] char* argv[argc+1]){ /*File scope blockfrom int main(){}*/
    // Decalrations for the variable A's elements
    double A[5]= {
        [0] = 2.0,
        [1] = 4.0,
        [4] = 3.E+25,
        [3] = 0.0007,

    };
// Doing work on the variable A
for (size_t  i = 0; i < 5; ++i){ /*Primary block for(){}*/
    printf("Element %zu is %g, \tits square is %g\n", /*Secondary block {}*/
    i,
    A[i],
    A[i]*A[i]);
}
return EXIT_SUCCESS;
}