#include <stdio.h>
#include "functions.h"

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
    char *random_string = rand_string_alloc(10);
    printf("%s\n", random_string);
    free(random_string);
    return 0;
}