// What is the volume of that sphere? 
#include <stdio.h>
#define PI 3.14159265358979323846

int main(void)
{
// declarations that we will store
    float radius;
    
// input values
    printf("Please enter the radius of your circle (in cm): ");
    scanf("%f", & radius);

// calucation and display 
    printf("Your circle is of volume: %.2f\n", (4.0f/3.0f)*PI*(radius*radius*radius));

    return 0;
}
