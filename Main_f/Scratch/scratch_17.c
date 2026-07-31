// Using break statements 

#include <stdio.h>
int main(void){

int n;
int i = 9;
int j = 0;
printf("Enter you integer value: \n");
scanf("%d", &n);

for (; i <= j; i--)
   if (n % i == 0)
    break;
    printf("%d is divisble by %d\n", n, i);  

return 0;
}