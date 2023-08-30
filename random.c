#include <stdio.h>
#include <stdlib.h>
#include "random.h"

char randchar(){
    //Creates a random number using the rand() function.
    //The upper bounds is set to 90 which is Z in ascii 
    //and the lower bounds is set to A which is 65
    return (rand() % (90 - 65 - 1)) + 65;
}