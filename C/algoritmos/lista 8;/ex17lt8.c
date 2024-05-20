#include <stdio.h>

int main()
{
	float x;

	printf("Digite o valor do produto: R$");
	scanf("%f", &x);

	if(x <= 20.00 && x > 0)
	{
		printf("Valor corrigido do produto: R$%.2f", x+((x/100)*45));
	}
	if(x > 20.00)
	{
		printf("Valor corrigido do produto: R$%.2f", x+((x/100)*30));
	}

	return 0;
}
