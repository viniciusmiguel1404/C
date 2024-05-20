#include <stdio.h>
#include <stdlib.h>
#define TAM 35
int main()
{
    int i=0,tam=0;

    char nome[TAM] = {"como mostrar o delimitador"};

    while (nome[i] != '\0')
    {
        if(nome[i] == '\n')
        {
            nome[i] = '\0';
            i++;
        }
    }
    while(nome[i] != '\0')
    {
        printf("%d = %c\n", i, nome[i]);
        i++;
        tam++;
    }
    printf("\nTamanho da string = %d", tam);

    return 0;
}
