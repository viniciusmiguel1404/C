#include <stdio.h>

int main()
{
    float x;

    printf("Qual o valor do produto?: ");
    scanf("%f", &x);

    printf("\nO valor do produto com 9%% de desconto eh de R$: %.2f", x-(x/100*9));

    return 0;
}