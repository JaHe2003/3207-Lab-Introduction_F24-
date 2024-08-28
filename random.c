#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar() {
    srand(time(NULL)); 
    char letter = 'A' + (rand() % 26);  
    return letter;
}
