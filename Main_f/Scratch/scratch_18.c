// Continue statements

#include <stdio.h>

int main(void) 
{

int n, sum, i = 0;
printf("Please enter 10 non zero digits ending in zero: ");

while (n < 10){
    scanf("%d", &i);
    sum += i;
    n++;
        if (i == 0)
        continue;
}

printf("The sum is %d\n", sum);

return 0;

}