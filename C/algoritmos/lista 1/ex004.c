#include <stdio.h>

int main()
{
    int pao, broa;

    printf("Quantos paes foram vendidos hoje?: ");
    scanf("%d", &pao);

    printf("Quantas broas foram vendidas hoje?: ");
    scanf("%d", &broa);

    printf("A padaria teve um lucro total de R$: %.2f e deve guardar R$%.2f", (float)(pao*0.12)+(broa*1.50), ((float)(pao*0.12)+(broa*1.50))/100*10);

    return 0;
}