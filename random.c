#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "functions.h"

char randchar() {
    char letter = 'A' + (rand() % 26);  
    return letter;
}
