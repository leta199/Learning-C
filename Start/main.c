#include <stdio.h> // pre-processing for input and output (displays text on screen)

int main() {
    printf("I am learning C \n");
    /*
    This is a multi line comment
    */
    printf("I am so excited \n");
     // include this for backward compatability 0 means no errors and anything else means error

    // variables - a container for a value, behaves like the value 

    int age = 25;
    int year = 2026;
    int quantity = 2;

    printf("The year is %d \n", year);
    printf("I am %d years old \n", age);
    printf("You have ordered %d items", quantity);
    return 0;
}
