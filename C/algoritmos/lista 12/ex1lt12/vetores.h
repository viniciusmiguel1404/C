#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int geraVetor(int limite, int tam)
{
    int  j, i;
    for(i=0;i<tam; i++)
    {
    j = rand() % limite;
    }

    return j;
    
    
}

void mostraVetor(int tam, int vet[])
{
    int i;

    for(i=0; i<tam; i++)
    {
        printf("%d ", vet[i]);
    }
}