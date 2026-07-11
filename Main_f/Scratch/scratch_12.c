// Conditional expressions - the same as math conditionals "if P, then Q"

#include <stdio.h>

int main(void)
{
int i,j,k;
printf("What is your value of i and j: ");
scanf("%d%d", &i, &j);

k = (i > j) ? i+j : 0; /* if i > j then k = i+j else k = 0*/

printf("Your value of k is: %d\n", k);

return 0;
}