// Just checking how pre and psot fix operators work

#include <stdio.h>

int main(void) 
{
int i = 10;
int m = 2;

while (i > m){
printf("Value of pre-increment %d", ++i);
printf("Value of pre-increment %d", i++);
}

return 0;
}