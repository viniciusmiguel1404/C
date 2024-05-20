#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{   
    int random , i, r1;

    srand(time(NULL));
    for(i=1; i<=10; i++)
    {
        random = rand();

        printf("%d o numero gerdo random = %d\n", i, random);
    }


    return 0;
}