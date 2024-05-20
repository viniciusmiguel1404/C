#include <stdio.h>
#include <stdlib.h>

int main()
{
    int random, i;

    for(i=1; i<=10; i++)
    {
        random = rand();
        printf("\n%2d o numero gerado = %5d\n", i,random);
    }


    return 0;
}