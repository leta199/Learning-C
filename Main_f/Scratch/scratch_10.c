// Operations in C

#include <stdio.h>

int main(void)
{
// Declarations with prefix increment
    int i = 1;
    printf("i is: %d\n",++i); /*side effect - increments i immediately - i is now 2*/
    printf("i is: %d\n",i); /*i stays 2*/

// Declarations with postfix increment
    int j = 2;
    printf("j is: %d\n",j++); /*does not increment j immediately- j is still 2 */
    printf("j is: %d\n",j); /*side effect - j is now 3*/

return 0;
}