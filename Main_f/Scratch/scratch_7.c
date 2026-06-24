// Playing with printf 

#include <stdio.h>

int main(void)
{
//declarations 
    int a = 12;
    float b = 12487.35986f;
// print displays 
    printf("|%d||%5d||%-5d||%5.3d|\n",a,a,a,a);
    printf("|%f||%5.6f||%5.6g||%5.6e|\n",b,b,b,b);

    return 0;
}