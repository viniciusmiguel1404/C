#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, random, limPos=5, limNeg=5;

    srand(time(NULL));
    
    for(i=1; i<=10; i++)
    {
        random = rand() % (limPos + limNeg + 1) - limNeg;

        printf("%d o numero gerado random = %d \n", i, random);
    }



    return 0;
}