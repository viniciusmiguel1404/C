#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random, i;

    srand(time(NULL));
    
    for(i=1;i<=10;i++)
    {
        random = rand()%(10+1)+5;
        printf("%d o numero gerado random = %d\n", i, random);
    }




    return 0;
}