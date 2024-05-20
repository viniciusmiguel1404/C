#include <stdio.h>
#include <stdlib.h>
#define TAM 35

int main()
{
    int i = 0, tam = 0;

    char nome[TAM];

    printf("Digite algo: ");
    fgets(nome,TAM,stdin);
    

    while(nome[i] != '\0')
    {
        if(nome[i]=='\n')
        {
        nome[i]= '\0';
        }
        i++;
    }
    i = 0;
    while(nome[i] != '\0')
    {
        printf("%d = %c\n", i, nome[i]);
        i++;
        tam++;

    }
   
    

    return 0;
}