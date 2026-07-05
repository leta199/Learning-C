// Selection statements - Cascaded if statments 

#include <stdio.h>

int main(void)
{
int a = 2;
if (a < 0)
    printf("The value of a is < 0\n");
else if (a == 0)
    printf("The value of a is = 0\n");
else 
    printf("The value of a is > 0");

return 0;
}