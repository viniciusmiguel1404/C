#include <stdio.h>
#include <stdlib.h>

int main()
{
    int random;

    random = rand();
    printf("\numero gerado: %d rand max = %d\n\n", random, RAND_MAX);


    return 0;
}