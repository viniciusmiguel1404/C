#include <stdio.h>
#include "maiorIdade.h"

int main()
{
    int vet[3];
    char repetir;
    do
    {
        printf("Digite a idade do Frank: ");
        scanf("%d", &vet[0]);
        printf("digite a idade de Xutes: ");
        scanf("%d", &vet[1]);
        printf("Digite a idade de belks: ");
        scanf("%d", &vet[2]);

        if (vet[0] == vet[1] && vet[1] == vet[2])
        {
            printf("Todos tem a mesma idade!\n");
        }
        else
        {
            printf("A maior idade eh: %d\n", maiorIdade(vet));
        }
        printf("Deseja repetir o programa? (s/n): ");
        scanf(" %c", &repetir);

    } while (repetir == 's' || repetir == 'S');
    return 0;
}