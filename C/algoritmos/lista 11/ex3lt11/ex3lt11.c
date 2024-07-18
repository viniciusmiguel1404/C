#include <stdio.h>
#include "elevado.h"

int main()
{

    int x, y = 1;
    char repetir;

    do
    {
        printf("Digite a base: ");
        scanf("%d", &x);
        do
        {
            if (y == 0)
            {
                printf("\nExpoente invalido");
                printf("\nDigite o expoente: ");
                setbuf(stdin, NULL);
                scanf("%d", &y);
            }
            else
            {
                printf("Digite o expoente: ");
                setbuf(stdin, NULL);
                scanf("%d", &y);
            }
        } while (y == 0);

        printf("%d elevado a %d =  %d", x, y, elevado(x, y));

        setbuf(stdin, NULL);
        printf("\nDseja repetir o programa (S ou N)? ");
        scanf("%c", &repetir);
        printf("\n");
    } while (repetir == 83 || repetir == 115);

    return 0;
}