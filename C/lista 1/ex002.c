#include <stdio.h>

int main()
{
    float euro, cot;

    printf("Qunatos euros voce tem?: ");
    scanf("%f", &euro);

    printf("Qual a cotacao do euro hoje?: ");
    scanf("%f", &cot);

    printf("voce tem um total de %.2fR$ em euros", euro*cot);

    return 0;
}