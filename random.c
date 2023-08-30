#include <stdio.h>
#include <stdlib.h>
#include "random.h"

char randchar(){
    return (rand() % (90 - 65 - 1)) + 65;
}