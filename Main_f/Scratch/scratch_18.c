// Continue statements

#include <stdio.h>

int main(void) 
{
int n, sum, i;
printf("Please enter 10 non zero digits ending in zero: ");

while (n < 10){
    scanf("%d", &i);
    if (i == 0)
    continue;
sum += i;
n++;
}

printf("The sum is %d\n", sum);


return 0;

}