#include <stdio.h>
#include <stdlib.h>
#include <time.h>  
#include "functions.h"

char* rand_string_alloc(size_t size);
char randchar(); 

char* rand_string_alloc(size_t size)
{
     char *s = malloc(size + 1);
     if (s) {
        for (size_t i = 0; i < size; i++) {
         s[i] = randchar();
     }
     s[size] = '\0';
     }
     return s;
}

int main() {
    srand(time(NULL)); 
    char *random_string = rand_string_alloc(7);
    printf("%s\n", random_string);
    free(random_string);
    return 0;
}