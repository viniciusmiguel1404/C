#include <stdio.h>

int main()
{
    float x;

    printf("Quanto voce tem?: R$");
    scanf("%f", &x);

    printf("Valor: R$ %.2f", x);

    printf("\nNotas de 100 = %d", (int)x/100);

    printf("\nNotas de 50 = %d", ((int)x%100)/50);

    printf("\nNotas de 10 = %d", (((int)x%100)%50)/10);

    printf("\nNotas de 5 = %d", ((((int)x%100)%50)%10)/5);

    printf("\nNotas de 1 = %d", (((((int)x%100)%50)%10)%5)/1);

    return 0;
}