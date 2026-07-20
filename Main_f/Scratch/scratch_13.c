// Loops 

#include <stdio.h>

int main(void)
{
int i = 1;
int j = 0;
int n;

printf("What value of n would you like?:  ");
scanf("%d", &n);

while (i < n) 
{
i *= 2;
++j;
}

printf("Two must be raised to %d to be greater than or equal to %d", j, n);

return 0;

}