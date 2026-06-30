// Row, column and diagonal sums 
// Directives 
#include <stdio.h>

int main(void) 
{
int arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, 
    arg10, arg11, arg12, arg13, arg14, arg15, arg16;    

// Printing, taking in and storing variables
printf("Please enter your sixteen numbers e.g ( 1 2 3): ");
scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", 
     &arg1, &arg2, &arg3, &arg4, &arg5, &arg6, &arg7, &arg8, &arg9, 
     &arg10, &arg11, &arg12, &arg13, &arg14, &arg15, &arg16);
printf("You have entered: \n\t%3d %3d %3d %3d\n\t%3d %3d %3d %3d\n\t%3d %3d %3d %3d\n\t%3d %3d %3d %3d\n", 
     arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, 
     arg10, arg11, arg12, arg13, arg14, arg15, arg16);
printf("The sum of each row is:\t%d\t%d\t%d", arg1 + arg2 + arg3 +arg4, 
    arg5 + arg6 + arg7 + arg8,  arg9 + arg10 + arg11 + arg12);
return 0;
}