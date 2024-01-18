#include <stdio.h>

int main()
{
    int num_frango;

    printf("Quantos frangos tem na granja?: ");
    scanf("%d", &num_frango);

    printf("O gasto total da granja para marcar todos os seus frangos eh de: R$%.2f", (float)num_frango*12.07);



    return 0;
}