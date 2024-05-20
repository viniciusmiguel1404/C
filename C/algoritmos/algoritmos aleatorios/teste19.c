#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random;

    srand(time(NULL));
    
    random = rand();
    printf("\n Numero gerado: %d rand max = %d\n\n", random, RAND_MAX);
    



    return 0;
}