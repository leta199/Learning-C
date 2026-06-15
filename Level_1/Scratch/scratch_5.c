//Swich function 

#include <stdio.h>
#include <stdlib.h>

int main(int argc,  char* argv[] ){

    char arg = argv[1][0];
switch(arg){
    case 'm': puts("This is Mogadishu.");
    break;
    case 'r': puts("This is Rwanda.");
    break;
    case 'g': puts("This is Gaborone.");

}
return EXIT_SUCCESS;
}