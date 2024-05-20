#include <stdio.h>

int main()
{
	float x,y;

	printf("Qual o valor do produto?: R$");
	scanf("%f", &x);

	printf("Qual a porcentagem do desconto a ser aplicado?: ");
	scanf("%f", &y);

	printf("o valor do produto com desconto: R$%.2f", x-(x/100*y));

	

	return 0;
}
