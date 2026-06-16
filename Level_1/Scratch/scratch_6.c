// Arithemtic in C
#include <stdio.h>
#include <stdlib.h>

int main( void){
    size_t a = 3;
    size_t b = 6;
    size_t c = (a + b)*a;
    printf("A is %zu \tB is %zu. \nYour answer is: %zu.\n",a,b,c);
    return EXIT_SUCCESS;
}