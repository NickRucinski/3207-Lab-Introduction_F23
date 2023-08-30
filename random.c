#include <stdio.h>
#include <time.h>
#include "random.h"

char randchar(){
    return (rand() % (90 - 65 - 1)) + 65;
}