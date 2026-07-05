// Selection statements - Cascaded if statments 

#include <stdio.h>

int main(void)
{
float a;
printf("What float value are you interested in: ");
scanf("%f", &a);
if (a < 0)
    printf("The value of a is < 0\n");
else if (a == 0)
    printf("The value of a is = 0\n");
else 
    printf("The value of a is > 0\n");

return 0;
}