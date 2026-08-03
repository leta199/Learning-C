// Using break statements 

#include <stdio.h>
int main(void){

int n;
int i = 9;
int j = 1;
printf("Enter you integer value: ");
scanf("%d", &n);

for (; i > j; i--)
   if (n % i == 0)
    break;
    printf("%d is divisble by %d\n", n, i);  
   if ( i == 1 )
   printf("%d is only divisible by 1\n", n);
      
return 0;

}