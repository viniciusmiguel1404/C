#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"

int main()
{
    int tam, n, i;
    
    srand(time(NULL));
    
    printf("informe o tamanho do vetor: ");
    scanf("%d", &tam);
    setbuf(stdin, NULL);

    int vet[tam];

    printf("informe o valor de n: ");
    scanf("%d", &n);
    setbuf(stdin, NULL);

    

    for(i=0; i<tam; i++)
    {
        vet[i] = geraVetor(n, tam);
    }
    
    mostraVetor(tam, vet);

    


    return 0;
}
