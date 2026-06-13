// CHALLENGE 1 
// Implement merge sort (with tests)

#include <stdio.h>
int main(void){
// Declare and define "A" array 
int A[5] = {
    [0] = 3,
    [1] = 4,
    [2] = 9,
    [3] = 10,
    [4] = 5,

};
// Spliting logic
size_t n = sizeof(A)/sizeof(int);
printf("Length of array is %zu.", n);

double split = n/2;
int B[n/2];

for ( size_t i = 0; i <= n/2; ++i){
     B[i] = {
        [i] = A[i],
    };
};}