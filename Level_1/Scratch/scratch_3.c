// Seeing how C handles if statemets at variable = 0

#include <stdio.h>

int main(void){
    for (size_t i = 0; i < 6; ++i){
        if(i){
            printf("Element i is: %zu\n.", 
            i);

        }}
}