#include <stdio.h>

int main()
{
    float altura, largura;

    printf("Me diga a altura do terreno em metros: ");
    scanf("%f", &altura);

    printf("Me diga a largura do terreno em metros: ");
    scanf("%f", &largura);

    printf("Seu terreno tem %.2fm²", altura*largura);


    return 0;
}