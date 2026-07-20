// Just checking how pre and psot fix operators work

#include <stdio.h>

int main(void) 
{
int i = 10;
int j = 10;
int m = 2;

while (i > m && j > m){
--i;
j--;
printf("Value of pre-decrement i is: %d\t", i);
printf("Value of post-decrement j is: %d\n", j);
}

return 0;
}