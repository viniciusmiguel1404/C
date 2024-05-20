#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random, i;

    srand(time(NULL));

    for(i=1;i<=10;i++)
    {
        random = rand()%3-1;
        printf("%d numero gerando random = %d\n", i, random);
    }





    return 0;
}