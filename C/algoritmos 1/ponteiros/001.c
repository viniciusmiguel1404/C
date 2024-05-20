#include <stdio.h>

int main()
{
    int x = 27;
    int *y;

    y = &x;

    printf("\nUtilizando ponteiros...\n\n");
    printf("Conteudo da variavel x: %d", x);
    printf("\nEndereço da variavel x %x", &x);
    printf("\nConteudo da variavel ponteiro y %d", *y);
    printf("\nEndereço da variavel ponteiro y %x", y);
    return 0;
}