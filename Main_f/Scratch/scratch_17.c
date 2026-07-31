// Using break statements 

#include <stdio.h>
int main(void){

int n;
int i;
int j = 0;
printf("Enter you integer value: \n");
scanf("%f", &n);

for (i = 9; i <= j; i--){
   if (n % i == 0){
    break;
    printf("%f is divisble by %d\n", n, i);
   }
   else;
   printf("%f is not divisible by 1 - 9", n);
}

return 0;
}