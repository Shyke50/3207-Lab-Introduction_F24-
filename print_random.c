#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"

//Given Project code
char* rand_string_alloc(size_t size)
{
     char *s = malloc(size + 1);
     if (s) {
        for(size_t i= 0; i< size; i++){
            s[i] = randchar();
        }
         s[size] = '\0';
     }
     return s;
}

int main()
{
    srand(time(NULL));
    char *random_word = rand_string_alloc(7);
    printf("Random word= %s\n", random_word);
    free(random_word);
    return 0;
}