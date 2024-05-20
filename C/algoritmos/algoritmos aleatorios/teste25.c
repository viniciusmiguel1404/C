#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;
    float random;

    srand(time(NULL));

    for (i=1; i<=10; i++)
    {
        random = (float)rand()/RAND_MAX;

        printf("\n%d o numero gerado random = %f", i , random);

    }



    return 0;
}