// Calculate number of digits in integers 

#include <stdio.h>

int main(void)
{
int digits = 0, i;

printf("Enter a non negative integer: ");
scanf("%d", &i);

do {
    i /= 10;
    ++digits;
}
while (i > 0);

return 0;

}