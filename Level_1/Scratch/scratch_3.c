// Seeing how C handles if statemets at variable = 0

#include <stdio.h>

int main(void){
    for (size_t i = 0; i < 6; ++i){
        if(i){ // will skip 0 and print starting from 1, therefore no printf when i = 0 i.e if(i) when i = 0 is False 
            printf("Element i is: %zu. \n", 
            i);

        }}
}